class Solution {
public:
    int alternateDigitSum(int n) {
       int cnt=0,sum=0,cnt1=0,x=n;

    while(x>0){
        x/=10;
        cnt1++;
    }
       while(n>0){
        int digit=n%10;
        n/=10;
        cnt++;
        if(cnt1%2==0){
        if(cnt%2==0){
            sum+=digit;
        }
        else if(cnt%2!=0){
            sum-=digit;
        }
        }
        else if(cnt1%2!=0){
            if(cnt%2!=0){
                sum+=digit;
            }
            else if(cnt%2==0){
                sum-=digit;
            }
        }
       } 
       return sum;
    }
};