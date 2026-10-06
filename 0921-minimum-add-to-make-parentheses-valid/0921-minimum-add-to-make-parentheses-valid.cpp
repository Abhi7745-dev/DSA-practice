class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;
        for(char x : s){
            if(x=='('){
                stk.push('(');
            }
            else if(x==')' && !stk.empty() &&stk.top()=='('){
                stk.pop();
            }
            else if(x==')'){
                stk.push(')');
            }
        }
        return stk.size();
    }
};