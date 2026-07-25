class Solution {
public:
    vector<vector<int>> dp;
    long helper(int i,int n,vector<int> &coins,int t){
        if(i==n){
            if(t==0) return 0;
            return INT_MAX;
        }
        if(dp[i][t]!=-1) return dp[i][t];
        long skip=helper(i+1,n,coins,t);
        if(coins[i]>t) return dp[i][t]=skip;
        long take=1+helper(i,n,coins,t-coins[i]);
        return dp[i][t]=min(skip,take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        dp.assign(n,vector<int>(amount+1,-1));
        long ans= helper(0,n,coins,amount);
        if(ans==INT_MAX) return -1;
        return ans;
    }
};