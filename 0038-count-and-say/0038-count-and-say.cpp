class Solution {
public:
    string a;
    
    string RLE(string s) {
       string ans="";
       int p1=0;
       int p2=1;
       int c=1;
       int x=0;
       while(p2<s.size()){
        if(s[p1]==s[p2]){
            p2++;
            c++;
        }
        else{
            ans+=to_string(c);
            ans+=s[p1];
            p1=p2;
            p2++;
            c=1;
        }

       }
        ans+=to_string(c);
        ans+=s[p1];
        return ans;
    }
    
    string countAndSay(int n) {
        if(n == 1) return "1"; 
        
        a = countAndSay(n - 1);
        a = RLE(a);
        return a;
    }
};