class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=*std::min_element(nums1.begin(),nums1.end());
        int even=1;
        if(mini%2==0){
            for(int i=0;i<nums1.size();i++){
                if(nums1[i]%2!=0){
                    even=0;
                    return false;
                }
            }
        }
        if(mini%2!=0){
            return true;
        }
        return even==1;
    }
};