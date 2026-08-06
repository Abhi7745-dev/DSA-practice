class Solution {
public:
    int smallestNumber(int n, int t) {
      int found=0;
        int ans=0;
        while(found!=1){
            int x=n;
            int prod=1;
            while(x>0){
                prod*=x%10;
                x/=10;
            }
            if(prod%t==0){ 
                found=1;
                ans=n;
                return ans;
            }
            else n++;
        }
        return 0;
    }
};