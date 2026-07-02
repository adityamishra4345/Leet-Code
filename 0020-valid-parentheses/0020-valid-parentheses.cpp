class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for (int i = 0; i < s.size(); i++) {
            char b = s[i];
            if (b == '{' || b == '[' || b == '(') {
                a.push(b);
            }
            else if(b == '}' || b == ']' || b == ')'){
                if(!a.empty()){
                    if(b=='}' && a.top()=='{'){
                        a.pop();
                    }
                    else if(b==']' && a.top()=='[' ){
                        a.pop();
                    }
                    else if(b==')' && a.top()=='('){
                        a.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
         return a.empty();
    }
};