class Solution {
public:
    void helper(vector<string> &ans,string s,int i,int n,vector<string> &dp){
        if(i==n){
            ans.push_back(s);
            dp[i]=s;
            return;
        }
        if(dp[i]!="") {
            ans.push_back(dp[i]);
            return;
        }
        if(s.size()==0 || (s.size()>=1 && s[s.size()-1]!='0')) helper(ans,s+"0",i+1,n,dp);
        helper(ans,s+"1",i+1,n,dp);
    }
    vector<string> validStrings(int n) {
        vector<string> dp(n+1,"");
        vector<string> ans;
        string s="";
        helper(ans,s,0,n,dp);
        return ans;
    }
};