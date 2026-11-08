class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int totalpts=0;
        int crntpts=0;
        for(int i=0;i<cardPoints.size();i++){
            totalpts+=cardPoints[i];
        }
        for(int i=0;i<cardPoints.size()-k;i++){
            crntpts+=cardPoints[i];
        }
        int ans=totalpts-crntpts;
        int j=cardPoints.size()-k;
        int i=0;
        while(j<cardPoints.size()){
            crntpts+=cardPoints[j]-cardPoints[i];
            ans=max(ans,totalpts-crntpts);
            i++;
            j++;
        }
        return ans;
    }
};