class Solution {
public:
    int findrotationpivot(vector<int>& nums, int start,int end){
        if(start==end){
            return start;
        } 
        int mid=(start+end)/2;
        if(nums[mid]>nums[end]){
            return findrotationpivot(nums,mid+1,end);
        }
        else{
            return findrotationpivot(nums,start,mid);
        }
    }
    int bs(vector<int>& nums, int start,int end , int target){
        int mid=(start+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(start>=end){
            return -1;
        } 
        

        if(nums[mid]>target){
            return bs(nums,start,mid,target);
        }
        else{
            return bs(nums,mid+1,end,target);
        }
    }
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        if(n==1){
            if(nums[0]==target){
                return 0;
            }
            else{
                return -1;
            }
        }
        int start=0;
        int end=n-1;
        int pivot=findrotationpivot(nums,start,end);
        int a=bs(nums,start,pivot-1,target);
        int b=bs(nums,pivot,end,target);
        if(a!=-1){
            return a;
        }
        if(b!=-1){
            return b;
        }
        return -1;

        



        
    }
};