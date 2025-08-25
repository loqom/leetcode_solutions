class Solution {
public:
    
    // int count(int n){
    //     if(n==2 || n==1|| n<=0) return n;
    //     return count(n-1)+count(n-2);
    // }
    int climbStairs(int n) {
        
        if(n==1 || n==2) return n;
        int x=1;
        int y=2;
        int nxt=0;
        int cn=0;
        for(int i=3;i<=n;i++){
            nxt=x+y;
            x=y;
            y=nxt;
        }
        
        return y;
        
    }
};