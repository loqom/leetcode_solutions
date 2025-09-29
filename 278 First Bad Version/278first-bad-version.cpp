// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo=1;
        long long int hi=n;
        int h;
        while(lo<=hi){
            long long int mid=(lo+hi)/2;
            bool y=isBadVersion(mid);
            if(y==true){
                h=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return lo;
    }
};