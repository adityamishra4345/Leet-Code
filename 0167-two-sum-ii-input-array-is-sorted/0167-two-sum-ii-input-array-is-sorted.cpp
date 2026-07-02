class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int c=1000000000;
        int a=0;
        int b=n-1;
        int d,l;
        vector<int> k(2);
          while(c!=target){
            if(numbers[a]+numbers[b]>target){
                b--;
            }
            else if(numbers[a]+numbers[b]<target){
                a++;
            }
            else{
                k[0]=(a+1);
                k[1]=(b+1);
                return k;
            }

        }
        return k;
    }

};