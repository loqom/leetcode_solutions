class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n=text.size();
        int t=brokenLetters.size();
        int i=0;
        bool y=0;
        int cn=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<t;j++){
                if(text[i]==brokenLetters[j]){
                    y=1;
                    break;
                }
            }

            if(text[i]==' ' ||i==n-1 ){
                if(y!=1) cn++;
                y=0;
            }
        }
        return cn;
    }
};