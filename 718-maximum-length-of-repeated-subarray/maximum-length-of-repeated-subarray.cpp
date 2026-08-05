class Solution {
public:
    vector<vector<int>> dp;
    int mx=0;
    int helper(int n1,int n2,vector<int> &nums1,vector<int> &nums2){
        if( n1==0 || n2==0 ) return 0;
        int ln=0;
        if(dp[n1][n2]!=-1) return dp[n1][n2];
        if(nums1[n1-1]==nums2[n2-1]) dp[n1][n2] = ln = 1+helper(n1-1,n2-1,nums1,nums2);
        mx=max(mx,ln);
        helper(n1-1,n2,nums1,nums2);
        helper(n1,n2-1,nums1,nums2);
        return dp[n1][n2]=ln;
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        dp.assign(n1+1,vector<int> (n2+1,-1));
        helper(n1,n2,nums1,nums2);
        return mx;
    }
};