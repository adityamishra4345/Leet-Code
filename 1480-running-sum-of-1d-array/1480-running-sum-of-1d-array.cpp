class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            int s=nums[i];
            nums[i]=c+nums[i];
            c+=s;

        }
        return nums;
        
    }
};