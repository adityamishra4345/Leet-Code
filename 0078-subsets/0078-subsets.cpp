class Solution {
public:
    void sub(vector<int>& nums,vector<vector<int>>& ans,int i,vector<int>& curr) {
        if(i==nums.size()){
            ans.push_back(curr);
            return ;
        }
        curr.push_back(nums[i]);
        sub(nums,ans,i+1,curr);
        curr.pop_back();
        sub(nums,ans,i+1,curr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sub(nums,ans,0,curr);
        return ans;
        
        
    }
};