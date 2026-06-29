class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int x=num;
     while(num>0){
        if(x%(num%10)==0 && num%10!=10){
            cnt++;
        }
        num/=10;
     }  
     return cnt; 
    }
};