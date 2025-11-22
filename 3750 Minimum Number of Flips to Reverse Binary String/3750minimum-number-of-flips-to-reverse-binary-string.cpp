class Solution {
public:
    int minimumFlips(int n) {
        string g="";
        int t=n;
        while(n>0) {
            int b=n%2;
            g.push_back('0'+b);
            n/=2;
        }
        reverse(g.begin(),g.end());
        string h=g;
        reverse(h.begin(),h.end());
        int s=g.size();
        int cn=0;
        for(int i=0;i<s;i++){
            if(g[i]!=h[i]) cn++;
        }
        return cn;
    }
};