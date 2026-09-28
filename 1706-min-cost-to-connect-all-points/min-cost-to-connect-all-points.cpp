class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<bool> visited(n);
        priority_queue<
            tuple<int, int, int>,
            vector<tuple<int, int, int>>,
            greater<tuple<int, int, int>>
        > pq;
        pq.push({0,0,-1});
        int sm=0;
        while(pq.size()>0){
            tuple<int,int,int> tp=pq.top();
            pq.pop();
            int a = get<1>(tp);  
            int b = get<2>(tp);
            int c = get<0>(tp);
            if(visited[a]==true) continue;
            visited[a]=true;
            sm+=c;
            for(int i=0;i<n;i++){
                if(a==i || b==i) continue;
                if(visited[i]==true) continue;
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[a][0];
                int y2=points[a][1];
                int diff=abs(x1-x2)+abs(y1-y2);
                pq.push({diff,i,a});
            }
        }
        return sm;
    }
};