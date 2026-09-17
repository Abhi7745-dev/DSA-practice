class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int> (n,0));
        int top=0;
        int left=0;
        int right=n-1;
        int bottom=n-1;
        int ele=1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                mat[top][i]=ele++;
            }top++;

            for(int j=top;j<=bottom;j++){
                mat[j][right]=ele++;
            }right--;
            if(top<=bottom){
            for(int k=right;k>=left;k--){
                mat[bottom][k]=ele++;
            }bottom--;
            }

            if(left<=right){
            for(int l=bottom;l>=top;l--){
                mat[l][left]=ele++;
            }left++;
            }
        }

        return mat;
    }
};