class Solution {
public:
    long long removeZeros(long long n) {
        if(n<10) return n;
        string s=to_string(n);
        int m=s.size();
        string o="";
        for(int i=0;i<m;i++){
            if(s[i]!='0') o+=s[i];
        }
        long long x=stoll(o);
        return x;
    }
};