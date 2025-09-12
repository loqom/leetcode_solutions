class Solution {
public:
    bool pstr(int n){
        if(n<=0) return false;
        if(n==1) return true;
        if(n%2!=0) return false;
        return pstr(n/2);
        
    }
    bool isPowerOfTwo(int n) {
        int h=pstr(n);
        return h;
    }
};