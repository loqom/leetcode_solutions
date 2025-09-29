class Solution {
public:
    int mySqrt(int x) {
        int l=0;
        int h=x;
        while(l<=h){
            long long int mid=(l+h)/2;
            long long int m=mid*mid;
            if(m==x) return mid;
            else if(m>x) h=mid-1;
            else l=mid+1;
        }
        return h;
    }
};