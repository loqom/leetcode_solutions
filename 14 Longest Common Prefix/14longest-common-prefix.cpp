class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if (strs.empty()) return "";
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());
        string h=strs[0];
        string g=strs[n-1];
        string l="";
        int len = min(h.size(), g.size());
        for(int i=0;i<len;i++){
            if (h[i]==g[i]){
                l+=h[i];
            }
            else break;
        }
        return l;
        
    }
};