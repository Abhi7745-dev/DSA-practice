class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        
        int cnte=0;
        int cnto=0;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                cnte++;
            }
            else if(nums[i]%2!=0){
                cnto++;
            }
        }
        for(int j=0;j<cnte;j++){
            ans.push_back(0);
        }
        for(int k=cnte;k<n;k++){
            ans.push_back(1);
        }

        return ans;
    }
};