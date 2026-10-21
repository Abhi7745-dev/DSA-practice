class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        int j=k;
        int i=0;
        double sumi=0;
        for(int m=0;m<k;m++){
            sumi+=nums[m];
        }
        sum=sumi;
        while(j<n){
            sumi+=(nums[j]-nums[i]);
            
            sum=max(sum,sumi);
            j++;
            i++;
        }
        return sum/k;
    }
};