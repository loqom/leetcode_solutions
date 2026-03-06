class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        if(n==1 || n==2) return true;
        int cn=0;
        for(int i=0;i<n;i++){
            if(cn>1) return false;
            if(s[i]=='1'){
                cn++;
                while(s[i]=='1') i++;
            }
        }
        if(cn==1) return true;
        return false;
    }
};