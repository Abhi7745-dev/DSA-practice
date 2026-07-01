class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int dsum=0;
            while(nums[i]>0){
                dsum+=nums[i]%10;
                nums[i]/=10;
            }
         
            ans=min(ans,dsum);
        }
        return ans;
    }
};