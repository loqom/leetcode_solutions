class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        int t=n;
        int i=0;
        int MAX_ITERATIONS = 1000;
        while(t!=1){
            int x=t;
            int sm=0;
            while(x>0){
                sm+=((x%10)*(x%10));
                x/=10;
            }
            t=sm;
            i++;
            if(t<1 || i>MAX_ITERATIONS ) return false;
        }
        return true;
    }
};