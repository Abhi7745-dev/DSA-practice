class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> st;
        for(auto x : nums){
            st.insert(x);
            int rev=0;
            while(x>0){
                rev=rev*10+x%10;
                x/=10;
            }
            st.insert(rev);
        }
        return st.size();
    }
};