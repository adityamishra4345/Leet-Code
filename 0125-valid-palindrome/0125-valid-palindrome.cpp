class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(isalnum(c)){
                t+=tolower(c);
            }
        }
        int a=0;
        int b=t.size()-1;
        int c=1;
        while(a<b){
            if((t[a])!=(t[b])){
                c=0;
                break;
            }
            a++;
            b--;
        }
        if(c==0){
            return false;
        }
        else{
            return true;
        }

        
            }
};