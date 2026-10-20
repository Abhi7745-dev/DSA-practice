class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=INT_MIN;
        int j=nums.size()-1;
        for(int i=0;i<nums.size()/2;i++){
            sum=max(sum,nums[i]+nums[j]);
            j--;
        }
        return sum;
    }
};