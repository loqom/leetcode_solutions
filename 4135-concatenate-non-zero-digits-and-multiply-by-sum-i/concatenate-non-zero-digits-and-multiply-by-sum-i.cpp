class Solution {
public:
    long long reverse(long long x){
        long sum=0;
        while(x){
            int rem=x%10;
            if(rem!=0) sum=sum*10+rem;
            x/=10;
        }
        return sum;
    }
    long long sum(long long n){
        int r=0;
        while(n>0){
            r+=(n%10);
            n/=10;
        }
        return r;
    }
    long long sumAndMultiply(int n) {
        long long u=reverse(n);
        long long v=reverse(u);
        
        return v*sum(v);
    }
};