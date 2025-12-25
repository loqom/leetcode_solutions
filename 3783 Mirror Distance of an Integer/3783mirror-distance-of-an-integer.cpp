class Solution {
public:
    int mirrorDistance(int n) {
        int x=n;
        int r=0;
        while(x){
            int rem=x%10;
            r=(r*10)+rem;
            x/=10;
        }
        if(r>n) return r-n;
        return n-r;
    }
};