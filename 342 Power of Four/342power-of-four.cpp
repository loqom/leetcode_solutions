class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        long prod=1;
        while(prod<=n){
            prod*=4;
            if(prod==n) return true;
        }
        return false;

    }
};