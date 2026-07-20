class Solution {
public:
    int helper(int m,int n,int er,int ec,vector<vector<int>>& arr,vector<vector<int>>& dp){
        if( m==er && n==ec ) return 1;
        if( m>er || n>ec) return 0;
        if(arr[m][n]==1) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n]=helper(m+1,n,er,ec,arr,dp)+helper(m,n+1,er,ec,arr,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m=arr.size(),n=arr[0].size();      
        if(arr[m-1][n-1]==1) return 0;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(0,0,m-1,n-1,arr,dp);
    }
};