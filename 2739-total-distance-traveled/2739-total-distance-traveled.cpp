class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance=0;
        while(mainTank>=5){
            mainTank-=5;
            distance+=50;
            if(additionalTank>=1){
                mainTank+=1;
                additionalTank-=1;
            }
        }
        distance+=mainTank*10;
        return distance;
    }
};