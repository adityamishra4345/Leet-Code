class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int> a;
        for(int i=0;i<n;i++){
            if(tokens[i]=="+" || tokens[i]=="-"||
             tokens[i]=="*"|| tokens[i]=="/"){
                int c=a.top();
                a.pop();
                int b=a.top();
                a.pop();
                if(tokens[i]=="+"){
                    a.push(c+b);
                }
                else if(tokens[i]=="-"){
                    a.push(b-c);
                }
                else if(tokens[i]=="*"){
                    a.push(c*b);
                }
                else if(tokens[i]=="/"){
                    a.push(b/c);
                }
            }
            else{
                int x=stoi(tokens[i]);
                a.push(x);
            }
        }
        return a.top();
    }
};