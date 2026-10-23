class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int k=0;
        int m=nums.size()-1;
        int first=-1;
        int last=-1;
        while(i<=j){
            int mid1=(i+j)/2;
            if(nums[mid1]==target){
                first=mid1;
                j=mid1-1;
                continue;
            }
            else if(nums[mid1]<target){
                i=mid1+1;
            }
            else{
                j=mid1-1;
            }
        }
        while(k<=m){
            int mid2=(m+k)/2;
            if(nums[mid2]==target){
                last=mid2;
                k=mid2+1;
                continue;
            }
            else if(nums[mid2]>target){
                m=mid2-1;
            }
            else if(nums[mid2]<target){
                k=mid2+1;
            }
            }
            return {first,last};
        }
        
    };