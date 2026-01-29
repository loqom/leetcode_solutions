class Solution {
public:
    int reverse(int x) {
        long sum=0;
        while(x){
            int rem=x%10;
            sum=sum*10+rem;
            x/=10;
        }
        return (INT_MIN>sum ||INT_MAX<sum)?0:sum;
        
    }
};