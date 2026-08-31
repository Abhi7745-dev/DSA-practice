class Solution {
public:
    double average(vector<int>& salary) {
        double mini=*std::min_element(salary.begin(),salary.end());
        double maxi=*std::max_element(salary.begin(),salary.end());
        double sum=0;
        int cnt=0;
        for(int i=0;i<salary.size();i++){
            if(salary[i]==maxi || salary[i]==mini){
                continue;
            }
            else{
                sum+=salary[i];
                cnt++;
            }
        }
        return sum/cnt;
    }
};