class Solution {
public:
    int arrangeCoins(int n) {
         int colm=1;
         while(n>=colm){
            n=n-colm;
            colm++;
         }
         return colm-1;
    }
};