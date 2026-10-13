class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long score=0;
        int n=nums.size();
        vector<int> nums1;
        for(int i=0;i<n;i++){
            nums1.push_back(abs(nums[i]));
        }
        sort(nums1.begin(),nums1.end());
        
        for(int i=0;i<=(n/2)-1;i++){
            score-=1LL*nums1[i]*nums1[i];
        }
        for(int i=n/2;i<n;i++){
            score+=1LL*nums1[i]*nums1[i];
        }
        
        
        return score;
    }
};