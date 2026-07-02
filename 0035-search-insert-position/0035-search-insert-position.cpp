class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start =0;
        int end=n-1;
        int mid=(start+end)/2;
        if(n==1){
            if(nums[0]==target){
                return 0;
            }
        }
        if(target>nums[n-1]){
            return n;
        }
        if(target<nums[0]){
            return 0;
        }
        while(start<end){
            mid=(start+end)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                if(mid>=1 && nums[mid-1]<target){
                    return mid;
                }
                end=mid;
               
            }
            else{
                if(mid<n-1 && nums[mid+1]>=target ){
                    return mid+1;
                }
                start=mid+1;
                
            }
        }
        if(n%2==0){
            return mid+1;}
        else{
            return mid;
        }
        
    }
};