class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo=1;
        long long int hi=num;
        while(lo<=hi){
            long long int mid=(lo+hi)/2;
            long long int m=mid*mid;
            if((m)==num) return true;
            else if(m>num) hi=mid-1;
            else lo=mid+1;
        }
        return false;

    }
};