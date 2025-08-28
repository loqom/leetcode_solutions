class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        if(n==1) return 1;
        int idx;
        for(int i=n-1;i>=0;i--){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                idx=i;
                break;
            }
        }  
        int cn=0;      
        for(int i=idx;i>=0;i--){
            if(s[i]==' ' ) break;
            cn++;
            
        }
        return cn;
    }
};