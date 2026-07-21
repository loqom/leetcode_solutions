class Solution {
public:
    vector<int>dp;
    int count(int n){
        if(n==2 || n==1|| n<=0) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=count(n-1)+count(n-2);
    }
    int climbStairs(int n) {
        dp.assign(n+1,-1);
        return count(n);        
    }
};