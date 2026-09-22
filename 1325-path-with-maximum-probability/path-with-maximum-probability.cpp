class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>> arr(n);
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0];
            int b=edges[i][1];
            double c=succProb[i];
            arr[a].push_back({b,c});
            arr[b].push_back({a,c});
        }
        vector<double> ans(n,0);
        ans[start]=1;
        priority_queue<pair<double,int>> pq;
        pq.push({1,start});
        while(pq.size()>0){
            pair<double,int> p1=pq.top();
            pq.pop();
            int a=p1.second;
            double b=p1.first;
            for(pair p:arr[a]){
                double tp=b*p.second;
                if(tp>ans[p.first]){
                    ans[p.first]=tp;
                    pq.push({tp,p.first});
                }
            }
        }
        return ans[end];
    }
};