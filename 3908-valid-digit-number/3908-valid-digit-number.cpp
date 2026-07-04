class Solution {
public:
    bool validDigit(int n, int x) {
        int firstd=n;
        while(firstd>=10){
            firstd/=10;

        }
        if(firstd==x){
            return false;
        }

        while(n>0){
            int digit=n%10;
            if(x==digit){
                return true;
            }
            n/=10;
        }
        return false;
    }
};