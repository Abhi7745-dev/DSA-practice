class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int rightheight=0;
        int leftheight=0;
        int ans=0;
        while(left<right){
            if(height[left]<height[right]){
                leftheight=max(leftheight,height[left]);
                ans+=leftheight-height[left];
                left++;
            }
            else{
                rightheight=max(rightheight,height[right]);
                ans+=rightheight-height[right];
                right--;
            }
        }
        return ans;
    }
};