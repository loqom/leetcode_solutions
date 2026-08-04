class Solution {
public:
    vector<vector<int>> dp;
    int helper(int i,int j,vector<int> &piles){
        if(i==j) return piles[i];
        if(dp[i][j]!=INT_MIN) return dp[i][j];
        return dp[i][j]=max(piles[i]-helper(i+1,j,piles),piles[j]-helper(i,j-1,piles));
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        dp.assign(n+1,vector<int>(n+1,INT_MIN));
        return helper(0,n-1,piles) >=0;
    }
};