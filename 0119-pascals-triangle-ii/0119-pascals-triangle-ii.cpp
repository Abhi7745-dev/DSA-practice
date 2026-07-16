class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        
        long long ans=1;
        result.push_back(ans);
        for(int i=1;i<rowIndex+1;i++){
            ans=ans*(rowIndex-i+1);
            ans/=i;
            result.push_back(ans);
        }
        return result;
    }
};