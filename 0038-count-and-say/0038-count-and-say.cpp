class Solution {
public:
   
    string countAndSay(int n) {
        string s="1";
        for(int i=1;i<n;i++){
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
            s=ans;
        }
        return s;
      
    }
};