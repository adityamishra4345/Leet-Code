class Solution {
public:
    int leftbs(vector<int> arr,int left,int right,int target){
        if(left>right) return -1;
        
         
         int mid=(left+right)/2;
         if(arr[mid]==target){
            int res = leftbs(arr, left, mid-1, target);
            return (res == -1) ? mid : res;
            

         }

         if(arr[mid]>target){
            return leftbs(arr,left,mid-1,target);
         }
         else{
            return leftbs(arr,mid+1,right,target);
         }
         
    }
    int rightbs(vector<int> arr,int left,int right,int target){
        if(left>right) return -1;
        
         
         int mid=(left+right)/2;
         if(arr[mid]==target){
            int rig=rightbs(arr,mid+1,right,target);
            return (rig==-1)? mid:rig;
            

         }

         if(arr[mid]>target){
            return rightbs(arr,left,mid-1,target);
         }
         else{
            return rightbs(arr,mid+1,right,target);
         }
         
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first=leftbs(nums,0,nums.size()-1,target);
        // if(first==-1) return [-1,-1];
        int last=rightbs(nums,0,nums.size()-1,target);
        vector<int> ans={first,last};
        return ans;
        
    }
};