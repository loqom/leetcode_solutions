class Solution {
public:
    int helper(int i,int n,vector<int> &nums,int t){
        if(i==n){
            if(t==0) return 1;
            return 0;
        }
        int add=helper(i+1,n,nums,t-nums[i]);
        int sub=helper(i+1,n,nums,t+nums[i]);
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(0,nums.size(),nums,target);
    }
};