class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
      int mini=*std::min_element(nums.begin(),nums.end());
      int maxi=*std::max_element(nums.begin(),nums.end());
      vector<bool> exist(maxi-mini+1);
      for(int &i: nums){
        exist[i-mini]=true;
      }
      vector<int> ans;
      for(int i=0;i<maxi-mini;i++){
        if(!exist[i]) ans.push_back(i+mini);
      }
       return ans;
    }
};