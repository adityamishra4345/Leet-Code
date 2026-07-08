class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& q) {
        int n = s.size();
        const long long MOD = 1e9 + 7;

        vector<long long> sumPre(n + 1, 0);
        vector<long long> numPre(n + 1, 0);
        vector<long long> cntPre(n + 1, 0);
        vector<long long> pw(n + 1, 1);

        for (int i = 1; i <= n; i++)
            pw[i] = pw[i-1] * 10 % MOD;

        for (int i = 0; i < n; i++) {
            int d = s[i] - '0';
            sumPre[i+1] = sumPre[i] + d;
            cntPre[i+1] = cntPre[i] + (d != 0);
            numPre[i+1] = (d != 0) ? (numPre[i] * 10 + d) % MOD : numPre[i];
        }

        vector<int> ans;
        for (auto& query : q) {
            int a = query[0], b = query[1];
            long long digitSum = sumPre[b+1] - sumPre[a];
            long long nonZeroCnt = cntPre[b+1] - cntPre[a];
            long long num = (numPre[b+1] - numPre[a] * pw[nonZeroCnt] % MOD + MOD) % MOD;
            ans.push_back(num * digitSum % MOD);
        }
        return ans;
    }
};