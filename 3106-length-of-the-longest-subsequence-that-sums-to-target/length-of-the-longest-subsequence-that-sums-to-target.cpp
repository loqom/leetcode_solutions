class Solution {
public:
    vector<vector<int>> dp;
    long helper(int i,int n,vector<int>&nums,int t){
        if(i==n){
            if(t==0) return 0;
            return INT_MIN;
        }
        if(dp[i][t]!=-1) return dp[i][t];
        long skip=helper(i+1,n,nums,t);
        if(t<nums[i]) return dp[i][t]=skip;
        long sub = helper(i+1, n, nums, t-nums[i]);
        long take = (sub == INT_MIN) ? INT_MIN : sub + 1;
        return dp[i][t]=max(take,skip);
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n=nums.size();
        dp.assign(n,vector<int>(target+1,-1));
        long ans = helper(0,n,nums,target);
        if(ans==INT_MIN) return -1;
        return ans;
    }
};