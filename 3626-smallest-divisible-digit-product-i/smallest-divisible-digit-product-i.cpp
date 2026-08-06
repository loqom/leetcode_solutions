class Solution {
public:
    int smallestNumber(int n, int t) {
        int s=n;
        while(true){
            int u=s;
            int a=u%10;
            u/=10;
            int b=1;
            if(u!=0) b=u;
            u/=10;
            int c=1;
            if(u!=0) c=u;
            if((a*b*c)%t==0) return s;
            s++;
        }
        return 0;
    }
};