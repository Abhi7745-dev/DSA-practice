class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U'){
                y+=1;
            }
            else if(moves[i]=='D'){
                y-=1;
            }
            else if(moves[i]=='R'){
                x+=5;
            }
            else if(moves[i]=='L'){
                x-=5;
            }
        }
        return x==0 && y==0;
    }
};