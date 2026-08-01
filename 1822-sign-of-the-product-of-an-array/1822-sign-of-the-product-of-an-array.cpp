class Solution {
public:
    int signfunc(int sign){
        if(sign>0){
            return 1;
        }
        else if(sign<0){
            return -1;
        }
        else if(sign==0){
            return 0;
        }
        return 0;
    }


    int arraySign(vector<int>& nums) {
        int sign=1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>0){
            sign*=1;
           }
           else if(nums[i]<0){
            sign*=-1;
           }
           else if(nums[i]==0){
            sign*=0;
           }
        }
       return signfunc(sign);
    }
};