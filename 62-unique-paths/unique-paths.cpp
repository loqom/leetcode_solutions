class Solution {
public:
    int helper(int m,int n,int re,int ce,vector<vector<int>> &dp){
        if(m==re && n==ce) return 1;
        if(m>re || n>ce) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n]=helper(m,n+1,re,ce,dp)+helper(m+1,n,re,ce,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(0,0,m-1,n-1,dp);
    }
};