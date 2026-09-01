class Solution {
public:
bool check(int n){
    int sum=0;

    if(n==1 || n==7){
        return true;
    }
    if(n==4){
        return false;
    }
    else{
        while(n>0){
            int digit=n%10;
            sum+=pow(digit,2);
            n/=10;
        }

    }
    if(sum==1){
        return true;
    }
    return check(sum);

    }
    bool isHappy(int n) {
        
        bool ans=check(n);
        return ans;
    }
};