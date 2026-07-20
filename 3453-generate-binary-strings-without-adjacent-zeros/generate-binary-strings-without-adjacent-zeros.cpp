class Solution {
public:
    void helper(vector<string> &ans,string s,int i,int n){
        if(i==n){
            ans.push_back(s);
            return;
        }
        if(s.size()==0 || (s.size()>=1 && s[s.size()-1]!='0')) helper(ans,s+"0",i+1,n);
        helper(ans,s+"1",i+1,n);
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        string s="";
        helper(ans,s,0,n);
        return ans;
    }
};