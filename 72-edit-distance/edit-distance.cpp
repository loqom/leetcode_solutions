class Solution {
public:
    vector<vector<int>> dp;
    int helper(int n,int m,string &p,string &s){
        if(n<0 || m<0) return (m<0) ?  n+1 :  m+1; 
        if(dp[n][m]!=-1) return dp[n][m];
        if(p[n]==s[m]) return dp[n][m]=helper(n-1,m-1,p,s);
        else return dp[n][m]=1+min(helper(n,m-1,p,s),min(helper(n-1,m,p,s),helper(n-1,m-1,p,s)));
    }
    int minDistance(string p, string s) {
        int n=p.size();
        int m=s.size();
        dp.assign(n+1,vector<int>(m+1,-1));
        return helper(n-1,m-1,p,s);
    }
};