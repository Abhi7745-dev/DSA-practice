class Solution {
public:
    int mirrorDistance(int n) {
        int reverse=0;
        int x=n;
        while(n>0){
            int digit=n%10;
            reverse=reverse*10;
            reverse+=digit;
            n=n/10;
        }
        return abs(x-reverse);
    }
};