class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int i=num.size()-1;
        int extra=0;
        int currentdigit=0;
        while(k>0 || i>=0 ||extra){
            if(i>=0){
                currentdigit=num[i];
            }
            else{
                currentdigit=0;
            }
            int digit=k%10;
            k=k/10;
            
            int sum=digit+currentdigit+extra;

            if(sum<10){
                result.insert(result.begin(),sum);
                extra=0;
            }
            else if(sum>=10){
                result.insert(result.begin(),sum%10);
               
                extra=sum/10;
            }
            else{
            result.insert(result.begin(),currentdigit);
            
           }
            i--;
        }
       
        return result;
    }
};