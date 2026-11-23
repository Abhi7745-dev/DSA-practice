class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int cnt=0;
        int ele=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                cnt++;
                if(cnt<=2){
                nums[j]=nums[i];
                j++;
                }
            }
            else if(ele!=nums[i]){
                ele=nums[i];
                cnt=1;
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};