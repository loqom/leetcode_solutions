class Solution {
public:
    vector<vector<int>>dp;
    int helper(int n,int m,string &s,string &p){
        if(m==0 || n==0) return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s[n-1]==p[m-1]) return dp[n][m]=1+helper(n-1,m-1,s,p);
        else return dp[n][m]=max(helper(n-1,m,s,p),helper(n,m-1,s,p));
    }
    int minInsertions(string s) {
        int n=s.size();
        int m=s.size();
        string p=s;
        dp.assign(n+1,vector<int>(m+1,-1));
        reverse(p.begin(),p.end());
        int f=helper(n,m,s,p);
        return n-f;
    }
};