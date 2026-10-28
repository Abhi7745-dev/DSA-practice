class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int maxi=INT_MIN;
        int cnt=0;
        for(i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                cnt++;
                maxi=max(maxi,cnt);
            }
        }
        maxi=cnt;
        for(i=k;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                cnt++;
                
            }
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                cnt--;
                
            }
            maxi=max(cnt,maxi);
        
            j++;
        } 
        return maxi;  
    }
};