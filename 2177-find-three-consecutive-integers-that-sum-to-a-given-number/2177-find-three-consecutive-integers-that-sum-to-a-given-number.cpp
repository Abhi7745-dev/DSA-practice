class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long x=num/3;
        if(num%3!=0){return {};}
        vector<long long> ans;
        ans.push_back(x-1);
        ans.push_back(x);
        ans.push_back(x+1);
        return ans;
    }
};