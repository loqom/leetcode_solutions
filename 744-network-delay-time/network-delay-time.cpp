class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> arr(n+1);
        int m=times.size();
        for(int i=0;i<m;i++){
            int a=times[i][0];
            int b=times[i][1];
            int c=times[i][2];
            pair<int,int> p1(b,c);
            arr[a].push_back(p1);
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,k});
        vector<int> ans(n+1,INT_MAX);
        ans[k]=0;
        while(pq.size()>0){
            pair<int,int> p1=pq.top();
            pq.pop();
            int a=p1.second; 
            int b=p1.first;
            if(b>ans[a]) continue;
            for(pair p : arr[a]){
                int tc=b+p.second;
                if(tc < ans[p.first]) {
                    ans[p.first] = tc;
                    pq.push({tc,p.first});
                }
            }
        }
        int mx=-1;
        for(int i=1;i<=n;i++){
            if(ans[i]==INT_MAX) return -1;
            mx=max(ans[i],mx);
        }
        return mx;
    }
};