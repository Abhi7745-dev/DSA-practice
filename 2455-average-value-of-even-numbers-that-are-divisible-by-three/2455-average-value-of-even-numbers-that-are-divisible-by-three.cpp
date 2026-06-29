class Solution {
public:
    int averageValue(vector<int>& nums) {
      long long numerator=0;
      int denominator=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]%3==0 && nums[i]%2==0){
            numerator+=nums[i];
            denominator++;
        }
      }
      if(numerator==0){
        return 0;
      }

      return numerator/denominator;
    }
};