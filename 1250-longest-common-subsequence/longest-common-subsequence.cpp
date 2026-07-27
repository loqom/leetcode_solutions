class Solution {
public:
    vector<vector<int>> dp;
    int helper(int n1,int n2,string &text1,string &text2){
        if( n1==0 || n2==0 ) return 0;
        if(dp[n1][n2]!=-1) return dp[n1][n2];
        if(text1[n1-1] == text2[n2-1]) return dp[n1][n2]=1+helper(n1-1,n2-1,text1,text2);
        else return dp[n1][n2]=max(helper(n1,n2-1,text1,text2),helper(n1-1,n2,text1,text2));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size();
        int n2=text2.size();
        dp.assign(n1+1,vector<int>(n2+1,-1));
        return helper(n1,n2,text1,text2);
    }
};