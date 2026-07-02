class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[nums[i]]==1){
                c=nums[i];
                break;
            }
            arr[nums[i]]++;
            
        }
        return c;
        
    }
};