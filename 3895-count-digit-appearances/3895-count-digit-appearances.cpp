class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0;
        for(int x : nums){
            while(x>0){
                int y=x%10;
                if(y==digit){
                    cnt++;
                }
                x/=10;
            }

        }
        return cnt;
    }
};