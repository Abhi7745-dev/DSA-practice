class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int sum=0;
        int prod=1;

        while(x>0){
            int digit=x%10;
            sum+=digit;
            prod*=digit;
            x/=10;
        }

        return (n%(sum+prod)==0);
    }
};