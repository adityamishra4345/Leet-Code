class Solution {
public:
    string removeDuplicates(string s) {
        string a="";
        int n=s.size();
        a.push_back(s[0]);
        for(int i=1;i<n;i++){
            if(!a.empty()&&s[i]==a.back()){
                a.pop_back();
            }
            else{
                a.push_back(s[i]);
            }
          
        }
        
        return a;
        
    }
};