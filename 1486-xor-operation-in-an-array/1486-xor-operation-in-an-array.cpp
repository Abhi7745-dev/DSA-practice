class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> nums(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
            ans^=nums[i];
        }
        
        return ans;
    }
};