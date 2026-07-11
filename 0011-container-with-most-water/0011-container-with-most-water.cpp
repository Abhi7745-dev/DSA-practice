class Solution {
public:
    int maxArea(vector<int>& height) {
              int i=0;
        int j=height.size()-1;
        int maxwater=0;
        while(i<j){
            int hei=min(height[i],height[j]);
            int area=hei*(j-i);
            maxwater=max(maxwater,area);

            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxwater;
    }
};