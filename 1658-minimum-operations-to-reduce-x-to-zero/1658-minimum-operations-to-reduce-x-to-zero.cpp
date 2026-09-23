class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int total = 0;

        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
        }

        int target = total - x;

        if(target < 0){
            return -1;
        }

        if(target == 0){
            return nums.size();
        }

        unordered_map<int, int> mp;
        mp[0] = -1;

        int psum = 0;
        int maxlen = -1;

        for(int i = 0; i < nums.size(); i++){

            psum += nums[i];

            int rem = psum - target;

            if(mp.find(rem) != mp.end()){
                int len = i - mp[rem];
                maxlen = max(maxlen, len);
            }

            if(mp.find(psum) == mp.end()){
                mp[psum] = i;
            }
        }

        if(maxlen == -1){
            return -1;
        }

        return nums.size() - maxlen;
    }
};