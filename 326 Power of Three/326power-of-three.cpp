class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        long prod=1;
        while(prod<=n){
            prod*=3;
            if(prod==n){
                return true;
            }
        }
        return false;
    }
};