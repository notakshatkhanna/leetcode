class Solution {
public:  
    int solve(int i, int j, vector<vector<int>> &t, vector<vector<int>> &dp){
        if(i>=t.size()) return 0;
        if(dp[i][j]!=-1)    return dp[i][j];
        return dp[i][j] = t[i][j] + min(solve(i+1,j,t,dp),solve(i+1,j+1,t,dp));
    }
    
    int minimumTotal(vector<vector<int>>& t) {
        int m = t.size(), n = t[m-1].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return solve(0,0,t,dp);
    }
};