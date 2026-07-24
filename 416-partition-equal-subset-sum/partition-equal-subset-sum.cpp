class Solution {
public:
    vector<vector<int>> dp;
    bool helper(int i,int n,vector<int> &nums,int t){
        if(i==n){
            if(t==0) return true;
            else return false;
        }
        if(dp[i][t]!=-1) return dp[i][t];
        bool skip=helper(i+1,n,nums,t);
        if(t<nums[i]) return dp[i][t]=skip;
        bool pick=helper(i+1,n,nums,t-nums[i]);
        return dp[i][t]=pick || skip;
    }
    bool canPartition(vector<int>& nums) {
        int sm=0;
        int n=nums.size();
        for(int i:nums) sm+=i;
        if(sm%2!=0) return false;
        dp.assign(n,vector<int>(sm/2+1,-1));
        return helper(0,n,nums,sm/2);
    }
};