class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int min=prices[0];
    int profit=0;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        else{
            if((prices[i]-min)>profit){
                profit=prices[i]-min;
                }       
             }
         }
   return profit;
    }
};