class Solution {
public:
    bool check(long long mid,vector<int>& time,int totalTrips){
        long long cm=0;
        for(int i=0;i<time.size();i++){
            cm+=mid/(long long)time[i];

        }
        if(cm<(long long)totalTrips) return false;
        else return true;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int mx=-1;
        int n=time.size();
        for(int i=0;i<n;i++){
            mx=max(mx,time[i]);
        }
        long long l=1;
        long long ans=-1;
        long long h=(long long)mx*(long long)totalTrips;
        while(l<=h){
        long long mid=l+(h-l)/2;
            if(check(mid,time,totalTrips)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
        
    }
};