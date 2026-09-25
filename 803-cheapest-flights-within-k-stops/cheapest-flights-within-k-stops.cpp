class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> arr(n);
        for(int i=0;i<flights.size();i++){
            int a=flights[i][0];
            int b=flights[i][1];
            int c=flights[i][2];
            arr[a].push_back({b,c});
        }
        vector<int> ans(n,INT_MAX);
        ans[src]=0;
        priority_queue<
            tuple<int, int, int>,
            vector<tuple<int, int, int>>,
            greater<tuple<int, int, int>>
        > pq;
        pq.push({0,0,src});
        while(pq.size()>0){
            tuple<int,int,int> tp=pq.top();
            pq.pop();
            int a = get<2>(tp);  
            int b = get<0>(tp);
            int c = get<1>(tp);
            if(b==k+1) continue;
            for(auto p : arr[a]){
                int tc=p.second+c;
                if(ans[p.first]>tc){
                    ans[p.first]=tc;
                    pq.push({b+1,tc,p.first});
                }
            }
        }
        return (ans[dst]==INT_MAX) ?  -1 :  ans[dst];
    }
};