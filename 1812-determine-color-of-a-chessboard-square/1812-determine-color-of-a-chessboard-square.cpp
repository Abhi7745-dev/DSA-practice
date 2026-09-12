class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a=coordinates[0];
        int b=coordinates[1];
        int sum=a+b-1;
        return sum%2==0;
    }
};