class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        vector<int> ans(num);
        if(sum>num*9) return "";
        else if(sum<10){
            ans[0]=sum;
            for(int i=1;i<num;i++){
                ans[i]=0;
            }
        }
        else if(num>=2 && sum>=10){
            ans[0]=9;
            sum-=9;
            for(int i=1;i<num;i++){
                ans[i]=min(9,sum);
                sum-=ans[i];
            }
        }
        string result="";
        for(int i=0;i<num;i++){
            result+=to_string(ans[i]);
        }
        return result;
    }
};