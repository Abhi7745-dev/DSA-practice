class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int j=0,k=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[j]=nums[i];
                j+=2;
            }
            if(nums[i]<0){
                ans[k]=nums[i];
                k+=2;
            }
        }
        return ans;
    }
};