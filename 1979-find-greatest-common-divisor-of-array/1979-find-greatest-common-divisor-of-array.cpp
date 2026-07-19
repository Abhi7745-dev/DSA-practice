class Solution {
public:
    int findGCD(vector<int>& nums) {
        int miniele=*std::min_element(nums.begin(),nums.end());
        int maxele=*std::max_element(nums.begin(),nums.end());
        return gcd(miniele,maxele);
    }
};