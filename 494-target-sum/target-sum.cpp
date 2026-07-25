class Solution {
public:
    int sm;
    vector<vector<int>> dp;
    int helper(int i,int n,int res,vector<int> &nums,int t){
        if(i==n){
            if(t==res) return 1;
            return 0;
        }
        if(dp[i][res+sm]!=-1) return dp[i][res+sm];
        int add=helper(i+1,n,res+nums[i],nums,t);
        int sub=helper(i+1,n,res-nums[i],nums,t);
        return dp[i][res+sm]=add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        sm=0;
        for(int i:nums) sm+=i;
        dp.assign(nums.size(),vector<int>(2*sm+1,-1));
        return helper(0,nums.size(),0,nums,target);
    }
}; 