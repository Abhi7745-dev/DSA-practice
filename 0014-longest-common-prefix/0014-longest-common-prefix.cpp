class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        for(int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
            for(string str : strs){
                if(i>=str.length() ||str[i]!=ch ){
                    return prefix;
                }
            }
            prefix+=ch;
        }
       return prefix; 
    }
};