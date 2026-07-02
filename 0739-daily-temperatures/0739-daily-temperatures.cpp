class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> a;
        vector<int> ans(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            while(!a.empty()&&temperatures[i]>temperatures[a.top()]){
                ans[a.top()]=i-a.top();
                a.pop();
            }
            a.push(i);
        }
        return ans;
    }
};