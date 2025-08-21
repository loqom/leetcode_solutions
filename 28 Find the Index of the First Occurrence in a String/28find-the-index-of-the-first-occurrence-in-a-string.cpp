class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int h=needle.size();
        for(int i=0;i<=n-h;i++){
            int k=0;
            int cn=0;
            if(haystack[i]==needle[0]){
                for(int j=i;j<i+h;j++){
                    if(haystack[j]==needle[k]){
                        cn++;
                        k++;
                    }
                    else{
                        break;
                    }
                }
                if(cn==h) return i;
            }
        }
        return -1;
    }
};