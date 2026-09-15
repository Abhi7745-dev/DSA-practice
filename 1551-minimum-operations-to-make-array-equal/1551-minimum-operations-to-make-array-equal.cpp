class Solution {
public:
    int minOperations(int n) {
        int sum=0;
        int ans=0;
        for(int i=0;i<=n;i++){
            sum+=(2*i)+1;
        }
        int avg=sum/n;
        if(avg%2==0){
            for(int i=1;i<n;i=i+2){
                ans+=i;
            }
        }
        else if(avg%2!=0){
            for(int i=2;i<n;i+=2){
                ans+=i;
            }
        }
        return ans;
    }
};