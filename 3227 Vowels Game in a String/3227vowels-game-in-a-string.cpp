class Solution {
public:
    bool doesAliceWin(string s) {
        int n=s.size();
        int cn=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                return true;
            }
        }
        return false;
    }
};