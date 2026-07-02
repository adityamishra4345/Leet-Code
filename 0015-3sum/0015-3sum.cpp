class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        int n=nums.size();
        int q=0;
        sort(nums.begin(), nums.end());
        int x=0;
        for(int j=0;j<n;j++){
            int a=0;
            int b=n-1;
            if(x!=0){
            if(nums[j]==nums[j-1]){
                continue;
            }}
            x++;
            for(int i=0;i<n;i++){
                if(a>n-1 || b<0){
                    break;
                }
                if(j==a ){
                    a++;
                    continue;
                }
                if(j==b ){
                    b--;
                    continue;
                }
                if(b==a ){
                    a++;
                    continue;
                }
                if(nums[j]+nums[a]+nums[b]>0){
                    b--;
                }
                else if(nums[j]+nums[a]+nums[b]<0){
                    a++;
                }
                else if(nums[j]+nums[a]+nums[b]==0){
                    vector<int> c={nums[a],nums[b],nums[j]};
                    sort(c.begin(),c.end());
                    result.insert(c);
                    a++;
                    b--;
                }
        }   
        }
        vector<vector<int>> final(result.begin(),result.end());

        return final;
    }
};