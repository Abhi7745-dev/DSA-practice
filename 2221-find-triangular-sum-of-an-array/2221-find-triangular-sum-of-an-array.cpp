class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        if(nums.size()<1){
            return -1;
        }
        else if(nums.size()==1){
            return nums[0]%10;
        }else if(nums.size()==2){
            return (nums[0]+nums[1])%10;
        }
        while(nums.size()!=1){
            int i=0;
            int j=1;
            int k=0;
            while(j<nums.size()){
                int x=nums[i]+nums[j];
                if(x>10){
                    nums[k]=x%10;
                }
                else{
                    nums[k]=x;
                }
                k++;
                j++;
                i++;
            }
            nums.resize(k);
        }
        return nums[0]%10;

    }
};