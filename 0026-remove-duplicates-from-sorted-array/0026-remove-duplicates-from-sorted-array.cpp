class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       vector<int> freq(201,0);
       vector<int> no(0);
       int n=nums.size();
       int a=0;
       for(int i=0;i<n;i++){
        if(freq[100+nums[i]]==1){
            continue;
        }
        else{
            freq[nums[i]+100]++;
            no.push_back(nums[i]);
            nums[a]=nums[i];
            a++;
        }
       }
       return no.size(); 
    }
};