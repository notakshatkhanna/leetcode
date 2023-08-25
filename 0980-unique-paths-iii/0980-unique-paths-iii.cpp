class Solution {
public:
    int solve(int i, int j, int m, int n, vector<vector<int>> &grid, int count){
        if(i<0 or j<0 or i>=m or j>=n or grid[i][j]==-1)    return 0;
        if(grid[i][j]==2)   return count==0;
        grid[i][j]=-1;
        int a = solve(i+1,j,m,n,grid,count-1);
        int b = solve(i-1,j,m,n,grid,count-1);
        int c = solve(i,j+1,m,n,grid,count-1);
        int d = solve(i,j-1,m,n,grid,count-1);
        grid[i][j]=0;
        return a+b+c+d;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int a, b, count=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)   a=i,b=j;
                if(grid[i][j]==0)   ++count;
            }
        }
        return solve(a,b,m,n,grid,count);
    }
};