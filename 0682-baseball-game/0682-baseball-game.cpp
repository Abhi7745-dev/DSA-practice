class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int len=0;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                ans.pop_back();
                len--;
            }
            else if(operations[i]=="D"){
                int last=ans[len-1];
                ans.push_back(2*last);
                len++;
            }
            else if(operations[i]=="+"){
                if(len>=2){
                    ans.push_back(ans[len-1]+ans[len-2]);
                    len++;
                }
            }
            else{
                ans.push_back(stoi(operations[i]));
                len++;
            }
        }
        for(int j=0;j<len;j++){
            sum+=ans[j];
        }
        return sum;
    }
};