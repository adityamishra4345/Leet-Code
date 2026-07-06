class Solution {
public:
    int findPoisonedDuration(vector<int>& ts, int d) {
        int n=ts.size();
        int c=0;
        int overlap=0;
         int att=0;
        for(int i=0;i<n;i++){
            
            overlap=0;
            if(i>0 && ts[i]<=att){
                 overlap=att-ts[i]+1;    
             }
             att=ts[i]+d-1;
            c+=d-overlap;

        }
        return c;
    }
};