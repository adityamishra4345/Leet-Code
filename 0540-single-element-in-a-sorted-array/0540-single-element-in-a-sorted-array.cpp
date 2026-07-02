class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res=-1;
        int start=0;
        int end=nums.size()-1;
        if(end==0){
            return nums[0];
        }
        if(nums[start]!=nums[start+1]){
            return nums[start];
        }
        if(nums[end]!=nums[end-1]){
            return nums[end];
        }
        while(start<end){
            int mid=(start+end)/2;
            if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            if((mid-start)%2==0){
                if(nums[mid]==nums[mid-1]){
                    end=mid-2;
                }
                else if(nums[mid]==nums[mid+1]){
                    start=mid+2;
                }  
            }
            else{
                if(nums[mid]==nums[mid-1]){
                    start=mid+1;
                }
                else if(nums[mid]==nums[mid+1]){
                    end=mid-1;
                } 
            }
        }
        if(start==end){
            return nums[start];
        }
        return -1;
    }
};