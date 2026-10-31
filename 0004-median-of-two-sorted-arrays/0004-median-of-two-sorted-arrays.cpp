class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;

        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j]){
                nums3.push_back(nums2[j]);
                j++;
            }
            else{
                nums3.push_back(nums1[i]);
                nums3.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        while(i<n){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            nums3.push_back(nums2[j]);
            j++;
        }
        int k=nums3.size();
        if(k%2==1){
            return (double)nums3[(k/2)];
        }
        return (double)(nums3[k/2]+nums3[(k/2)-1])/2;
    }
};