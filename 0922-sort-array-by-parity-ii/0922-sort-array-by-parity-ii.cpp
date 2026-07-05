class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int post=0;
        int nega=1;
        int k=0;
        vector<int> result(n,0);
        while(k<n){
            if(nums[k]%2==0){
                result[post]=nums[k];
                post+=2;
                k++;
            }
            else if(nums[k]%2!=0){
                result[nega]=nums[k];
                nega+=2;
                k++;
            }
        }
        return result;
    }
};