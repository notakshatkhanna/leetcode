class Solution {
public:
    int solve(int i, vector<int> &dp){
        if(i==0)    return 0;
        if(i==1)    return 1;
        if(dp[i])   return dp[i];
        return dp[i] = solve(i/2,dp)+i%2;
    }
    
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=0;i<=n;i++)   ans[i] = solve(i, ans);
        return ans;
    }
};