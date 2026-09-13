class Solution {
public:
  int numIdenticalPairs(vector<int>& nums) {
        int maxi=*std::max_element(nums.begin(),nums.end());
        vector<int> freq(maxi+1,0);
        int pairs=0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<=maxi;i++){
            if(freq[i]>=2){
                int n=freq[i];
                pairs+=n*(n-1)/2;
            }
        }
        return pairs;
    }
};