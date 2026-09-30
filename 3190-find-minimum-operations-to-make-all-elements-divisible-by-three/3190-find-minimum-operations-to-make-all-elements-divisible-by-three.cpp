class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int opt=0;
        for(int x : nums){
            opt+=min(x%3,3-x%3);
        }
        return opt;
        
    }
};