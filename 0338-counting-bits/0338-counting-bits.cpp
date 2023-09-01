class Solution {
public:
    int solve(int i){
        if(i==0)    return 0;
        if(i==1)    return 1;
        return solve(i/2)+i%2;
    }
    
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i] = solve(i);
        }
        return ans;
    }
};