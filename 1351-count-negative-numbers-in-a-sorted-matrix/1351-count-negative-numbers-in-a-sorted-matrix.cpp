class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int colm=grid[0].size();

        int cnt=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<colm;j++){
                if(grid[i][j]<0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};