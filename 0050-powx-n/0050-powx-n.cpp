class Solution {
public:
    double myPow(double x, int n) {
        long s=n;
        if (n<0){
            s=-s;
            x=1/x;
            }
        double r=1;
        double a=x;
        while(s>0){
            if(s%2==1){
                r=r*x;
            }
            x=x*x;
                        
            s=s/2;
        }
        
        return r;
        
    }
};