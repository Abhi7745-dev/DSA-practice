class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0,i=1;
        while(sum<=num/2){
            if(num%i==0){
                sum+=i;
                i++;
            }
            else{
                i++;
            }
        }
        if(num==1){
            return false;
        }
        return sum==num;
    }
};