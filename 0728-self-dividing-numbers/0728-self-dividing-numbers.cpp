class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++){
            int num=i;
            int temp=i;
            int cnt=0;
            while(temp>0){
                int digit=temp%10;
                temp/=10;
                if(digit==0 || num%digit!=0){
                    cnt++;
                }
            }
        if(cnt==0){
            result.push_back(num);
        }
        }
        return result;
    }
};