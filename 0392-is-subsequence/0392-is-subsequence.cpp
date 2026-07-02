class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0,b=0;
        int n=s.size();
        int m=t.size();
        int k=max(m,n);
        for(int i=0;i<k;i++){
            if(a>=n||b>=m){
                break;
            }
            if(s[a]==t[b]){
                a++;
                b++;
            }
            else{
                b++;
            }
        }
        if(a==n){
            return true;
        }
        else{
            return false;
        }
    }
};