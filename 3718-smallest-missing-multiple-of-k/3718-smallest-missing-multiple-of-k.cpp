class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(),nums.end());
        int found=0;
        int find=k;
        while(found==0){
            if(st.find(find)==st.end()){
                found=1;
                break;

            }
            find+=k;
        }
        return find;
    }
};