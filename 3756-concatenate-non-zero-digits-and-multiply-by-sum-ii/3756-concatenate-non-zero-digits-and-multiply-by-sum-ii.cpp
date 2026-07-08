class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& q) {
        int n = s.size();
        const int MOD = 1e9 + 7;

        vector<int> sumPre(n + 1, 0);
        vector<int> numPre(n + 1, 0);
        vector<int> cntPre(n + 1, 0);
        vector<int> pw(n + 1, 1);

        for (int i = 1; i <= n; i++)
            pw[i] = (long long)pw[i-1] * 10 % MOD;

        for (int i = 0; i < n; i++) {
            int d = s[i] - '0';
            sumPre[i+1] = sumPre[i] + d;
            cntPre[i+1] = cntPre[i] + (d != 0);
            numPre[i+1] = d ? ((long long)numPre[i] * 10 + d) % MOD : numPre[i];
        }

        vector<int> ans;
        ans.reserve(q.size());

        for (auto& query : q) {
            int a = query[0], b = query[1];
            int digitSum = sumPre[b+1] - sumPre[a];
            int nonZeroCnt = cntPre[b+1] - cntPre[a];
            int num = ((long long)numPre[b+1] - (long long)numPre[a] * pw[nonZeroCnt] % MOD + MOD) % MOD;
            ans.push_back((long long)num * digitSum % MOD);
        }
        return ans;
    }
};