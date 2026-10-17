class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int> hashmap(n);
        for(int i=0;i<n;i++){
            hashmap[i]=i;
        }
        vector<int> perm(n);
        int cnt=0;
        do{
        for(int i=0;i<n;i++){
            if(i%2==0){
                perm[i]=hashmap[i/2];
                
                }
            else{
                perm[i]=hashmap[n/2+(i-1)/2];
                
                }
        }
        hashmap=perm;
        cnt++;
        }while(!is_sorted(hashmap.begin(),hashmap.end()));
       
        return cnt;
    }
};