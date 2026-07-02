class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int a=0,i=0,j=0;
     vector<int> arr(m+n,0);
     while(a<m+n && i< m && j<n){
        if(nums1[i]<nums2[j]){
            arr[a]=nums1[i];
            i++;
        }
        else{
            arr[a]=nums2[j];
            j++;
        }
        a++;
     }

        while(i<m&&a<m+n){
            arr[a]=nums1[i];
            i++;
            a++;
        
     }
    
        while(j<n&&a<m+n){
            arr[a]=nums2[j];
            j++;
            a++;
        
     }
     for(int i=0;i<m+n;i++){
        nums1[i]=arr[i];
     }
    }
};