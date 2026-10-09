class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool s1break=true,s2break=true;
        for(int i=0;i<s1.size();i++){
            if(s1[i]<s2[i]) s1break=false;
            if(s2[i]<s1[i]) s2break=false;

        }
        return s1break || s2break;
    }
};