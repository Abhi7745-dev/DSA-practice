class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                ans=i;
            }
        }
        return ans;
    }
};