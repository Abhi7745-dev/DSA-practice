class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> height1;
        height1=heights;
        sort(height1.begin(),height1.end());
        int cnt=0;
        for(int i=0;i<heights.size();i++){
            if(height1[i]!=heights[i]){
                cnt++;
            }
        }
        return cnt;
    }
};