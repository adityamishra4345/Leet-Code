class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int ans=0;
        int sign=0;
            
            while(i<s.size()&&(s[i] < '0' || s[i] > '9')){
                 if(s[i]>=65 &&s[i]<=122||s[i]=='.'){
                   return 0;
            }
                if(s[i]=='-'){
                    sign=1;
                    i++;
                    break;
                }
                if(s[i]=='+'){
                    sign=0;
                    i++;
                    break;
                }
               
                i++;  
            }
            while(i<s.size()&&(s[i] >= '0' && s[i] <= '9')){
                
                if((ans)>INT_MAX/10){
                    if(sign==1){
                        return INT_MIN;
                    }
                    return INT_MAX;
                }
                if(s[i]>='7'&&ans==214748364){
                    if(s[i]>='7' && sign==0){
                        return INT_MAX;
                    }
                    else if(s[i]>'7' && sign==1){
                        return INT_MIN;
                    }
                    
                }
                ans=(ans*10)+(s[i]-'0');
                i++;
               
            }


        
        if(sign==1){
            ans=-ans;
        }
        return ans;
        
    }
};