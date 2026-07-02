class Solution {
public:
    bool isPalindrome(int x) {
        string a=to_string(x);
        string b=a;
        reverse(b.begin(),b.end());
        if(a==b){
            return true;
        }
        else{ return false;
        }
        
        
        
            

        
        
    }
};