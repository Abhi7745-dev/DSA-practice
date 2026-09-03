class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        vector<int> ans;
        int carry=1;
        for(int i=n;i>=0;i--){
            int digit=digits[i]+carry;
            if(digit<10){
                ans.insert(ans.begin(),digit);
                carry=0;
            }else{
                int x=digit%10;
                ans.insert(ans.begin(),x);
                carry=digit/10;
            }
        }
        if(carry>0){
            ans.insert(ans.begin(),carry);
        }
        return ans;
    }
};