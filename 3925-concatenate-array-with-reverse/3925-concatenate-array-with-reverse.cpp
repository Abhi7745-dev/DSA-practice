class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int j=2*n-1;
        vector<int> ans(2*n);
        while(i<n){
            ans[i]=nums[i];
            ans[j-i]=nums[i];
            i++;

        }
        return ans;
    }
};