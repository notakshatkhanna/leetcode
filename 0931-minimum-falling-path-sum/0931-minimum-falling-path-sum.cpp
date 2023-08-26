class Solution {
public:
    int f(int i, int j, vector<vector<int>>& m, vector<vector<int>>& dp){
        if(i==0 and j>=0 and j<m[0].size())    return m[i][j];
        if(i<0 or j<0 or j>=m[0].size())  return INT_MAX;
        if(dp[i][j]!=INT_MAX)    return dp[i][j];
        return dp[i][j] = m[i][j] + min({f(i-1,j,m,dp),f(i-1,j-1,m,dp),f(i-1,j+1,m,dp)});
    }   
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), sol = INT_MAX;
        vector<vector<int>> dp(m, vector<int> (n,INT_MAX));
        for(int i=0;i<n;i++)    sol = min(sol, f(m-1,i,matrix,dp));
        return sol;
    }
};