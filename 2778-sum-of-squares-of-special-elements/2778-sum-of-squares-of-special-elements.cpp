class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(n%(i+1)==0){
                sum+=pow(nums[i],2);
            }
        }
        return sum;
    }
};