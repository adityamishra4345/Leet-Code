class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> fake=nums;
        sort(nums.begin(),nums.end());
        vector<int> v;
        int a=0;
        int b=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            int x=nums[a];
            int y=nums[b];
            if(x+y==target) {
               
                break;
            }
            else if(x+y<target){
                a++;
            }
            else if(x+y>target){
                b--;
            }
        }
       
      
        for(int i=0;i<nums.size();i++){
            if(fake[i]==nums[a] || fake[i]==nums[b]){
                v.push_back(i);
            }
            if(v.size()==2) break;
        }
        
        
        return v;
        
        
    }
};