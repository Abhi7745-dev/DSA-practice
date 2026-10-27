class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen=INT_MAX;
        int sum=0,cnt=0,left=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            cnt++;
            while(sum>=target){
                minlen=min(cnt,minlen);
                sum-=nums[left];
                left++;
                cnt--;
            }
        }
        if(minlen==INT_MAX){
            return 0;
        }
        return minlen;
    }
};