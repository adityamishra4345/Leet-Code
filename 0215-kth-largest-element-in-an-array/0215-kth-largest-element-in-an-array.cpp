class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int c=100000;
        int a=0;
        // for(int i=n-1;i>=0;i--){
        //     if(nums[i]<c){
        //         c=nums[i];
        //         a++;
        //     }
        //     if(a==k){
        //         return c;
        //     }
        // }
        return nums[n-k];
        
    }
};