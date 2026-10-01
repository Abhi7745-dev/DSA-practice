class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x : s){
            if(x=='(') st.push('(');
            else if(x==')'){
                if(st.empty() || st.top()!='(') return false;
                st.pop();
            }
            else if(x=='{') st.push('{');
            else if(x=='}'){
                if(st.empty() || st.top()!='{') return false;
                st.pop();
            }
            else if(x=='[') st.push('[');
            else if(x==']'){
                if(st.empty() || st.top()!='[') return false;
                st.pop();
            }
            

        }
        return st.size()==0;
    }
};