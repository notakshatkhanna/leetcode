class Solution {
public:
    int solve(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp){
        if(i<0 or j<0)    return 0;
        if(grid[i][j] == 1) return 0;
        if(i==0 and j==0)   return 1;
        if(dp[i][j]!=-1)    return dp[i][j];
        return dp[i][j] = solve(i-1,j,grid,dp) + solve(i,j-1,grid,dp);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int> (n,-1));
        return solve(m-1, n-1, grid, dp);   
    }
};