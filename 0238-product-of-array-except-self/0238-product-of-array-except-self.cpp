class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int prefix=1;
        int suffix=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=prefix;
            prefix*=nums[i];
        }
        int j=nums.size()-1;
        while(j>=0){
            ans[j]*=suffix;
            suffix*=nums[j];
            j--;
        }
        return ans;
    }
};