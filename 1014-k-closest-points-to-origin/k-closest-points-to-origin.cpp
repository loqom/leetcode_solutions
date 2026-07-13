class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<pair<int,vector<int>>> hp;
        for(int i=0;i<n;i++){
            pair<int,vector<int>> p;
            p.first=(points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            p.second=points[i];
            hp.push(p);
            if(hp.size()>k) hp.pop();
        } 
        vector<vector<int>> ans(k);
        for(int i=0;i<k;i++){
            ans[i]=hp.top().second;
            hp.pop();
        }
        return ans;
    }
};