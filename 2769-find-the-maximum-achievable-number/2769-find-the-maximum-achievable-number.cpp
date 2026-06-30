class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int max=num;
        while(t>0){
            max+=2;
            t--;
        }
        return max;
    }
};