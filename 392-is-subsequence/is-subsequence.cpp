class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int j=0;
        for(int i=0;i<n;i++){
            bool y=false;
            while(j<m){
                if(s[i]==t[j]){
                    y=true;
                    j++;
                    break;
                }    
                j++;
            }
            if(y==false) return false;
        }
        return true;
    }
};