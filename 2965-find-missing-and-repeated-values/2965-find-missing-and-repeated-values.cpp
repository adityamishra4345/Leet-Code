class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> arr(n*n +1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[grid[i][j]]=arr[grid[i][j]]+1;
            }
        }
        int a=0,b=0;
        for(int i=1;i<=n*n;i++){
            if(arr[i]==0){
                a=i;
            }
            if(arr[i]==2){
                b=i;
            }
        }
    
    return {b,a};}
};