class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int colm=matrix[0].size();
        vector<vector<int>> ans(colm, vector<int>(row));
   
        for(int i=0;i<row;i++){
            for(int j=0;j<colm;j++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
};