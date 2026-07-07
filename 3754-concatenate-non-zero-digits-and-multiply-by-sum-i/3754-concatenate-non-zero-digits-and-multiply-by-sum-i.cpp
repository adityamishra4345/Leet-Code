class Solution {
public:
    long long sumAndMultiply(long long n) {
        long long a=0;
        string b="";
        if(n==0){
            return 0;
        }
        
        while(n>=1){
            if((n%10)!=0){
                b+=(n%10)+'0';
                a+=n%10;
            }
            n=n/10;
        }
        reverse(b.begin(),b.end());
        n=stoi(b);
        // long long  x=n*a;
        return n*a;

        
    }
};