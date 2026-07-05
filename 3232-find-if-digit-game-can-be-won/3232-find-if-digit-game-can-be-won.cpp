class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0,dsum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                sum+=nums[i];
            }
            else if(nums[i]>=10){
                dsum+=nums[i];
            }
        }

        if(sum>dsum || dsum>sum){
            return true;
        }
        return false;
    }
};