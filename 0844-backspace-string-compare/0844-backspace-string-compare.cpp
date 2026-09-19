class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        stack<char> tt;
        int n1=s.size();
        int n2=t.size();
        int i=0,j=0;
        while(i<n1 && j<n2 ){
            if(s[i]=='#'){
                if(!ss.empty()){
                ss.pop();
            }
            }
            else{
                ss.push(s[i]);
            }
            if(t[j]=='#'){
                if(!tt.empty()){
                    tt.pop();
                }
                
            }
            else{
                tt.push(t[j]);
            }
            
            i++;j++;
        }
        while(i<n1){
            if(s[i]=='#'){
                if(!ss.empty()){
                ss.pop();
            }
            }
            else{
                ss.push(s[i]);
            }
            i++;
        }
        while(j<n2){
            if(t[j]=='#'){
                if(!tt.empty()){
                    tt.pop();
                }
                
            }
            else{
                tt.push(t[j]);
            }
            j++;

        }
        if(ss.size()!=tt.size()){
            return false;
        }
        while(!ss.empty()){
            if(ss.top()!=tt.top()){
                return false;
            }
            ss.pop();
            tt.pop();
        }
        return true;
    }
};