class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      map<int,int> mpp;
      int prefixsum=0;
      int cnt=0;
      mpp[0]=1;
      for(int i=0;i<nums.size();i++){
        prefixsum+=nums[i];
        int remove=prefixsum-k;
        cnt+=mpp[remove];
        mpp[prefixsum]+=1;
      }
      return cnt; 
    }
};