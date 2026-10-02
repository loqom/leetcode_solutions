class Solution {
public:
    void call(int n,string s,int o,int c,vector<string> &v){
        if(c==n){
            v.push_back(s);
        }
        if(o<n) call(n,s+'(',o+1,c,v);
        if(c<o) call(n,s+')',o,c+1,v);
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> v;
        call(n,s,0,0,v);
        return v;

    }
};