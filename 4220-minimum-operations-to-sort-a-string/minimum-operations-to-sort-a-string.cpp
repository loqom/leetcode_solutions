class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string t=s;
        sort(t.begin(),t.end());
        if(t==s) return 0;
        if(n==2) return -1;
        int mn='z',mx='a';
        int mnidx=-1,mxidx=-1;
        for(int i=0;i<n;i++){
            int c=s[i];
            if(c>mx){
                mx=c;
                mxidx=i;
            }
            if(c<mn){
                mn=c;
                mnidx=i;
            }
        }
        if(s[0]==mn || s[n-1]==mx) return 1;
        // if(mxidx==0 && mnidx==n-1) return 3;
        for(int i=1;i<n-1;i++) if(s[i]==mn || s[i]==mx) return 2;
        return 3;
    }
};