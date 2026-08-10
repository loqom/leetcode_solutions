bool cmp(vector<int> &a,vector<int> &b){
    return a[0]<b[0];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int n=intervals.size();
        int ls=intervals[0][1];
        int cn=0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]<ls) {
                ls=min(ls,intervals[i][1]);
                cn++;
            }
            else ls=intervals[i][1];
        }
        return cn;
    }
};