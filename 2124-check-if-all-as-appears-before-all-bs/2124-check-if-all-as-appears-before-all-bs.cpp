class Solution {
public:
    bool checkString(string s) {
        int first_b=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                first_b=i;
            }
            if(first_b!=-1){
                if(s[i]=='a'){
                    return false;
                }
            }
        }
        return true;
    }
};