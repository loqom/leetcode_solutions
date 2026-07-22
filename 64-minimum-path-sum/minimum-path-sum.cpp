class Solution {
public:
    vector<vector<int>> dp;
    int helper(int n,int m,int er,int ec,vector<vector<int>>& grid){
        if(n==er && m==ec) return grid[n][m];
        if(n>er || m>ec) return INT_MAX;
        if(dp[n][m]!=-1) return dp[n][m];
        return dp[n][m]=grid[n][m]+min(helper(n+1,m,er,ec,grid),helper(n,m+1,er,ec,grid));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        dp.assign(n,vector<int>(m,-1));
        return helper(0,0,n-1,m-1,grid);
    }
};