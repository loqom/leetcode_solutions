class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        int cn=0;
        for(int i=0;i<=n-3;i++){
            int j=i;
            char a=s[j];
            char b=s[j+1];
            char c=s[j+2];
            if(a!=b && b!=c && c!=a) cn++;
            
        }
        return cn;
    }
};