class Solution {
public:
    int countEven(int num) {
        int cnt=0;
        for(int i=2;i<=num;i++){
            long long sum=0;
            int x=i;
            while(x>0){
                
                 sum+=x%10;
                x/=10;
            }
            if(sum%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};