class Solution {
public:
    vector<bool> visited;
    void helper(vector<vector<int>>& arr,int i){
        visited[i] = 1;
        int n=arr.size();
        queue<int> q;
        q.push(i);
        while(q.size()>0){
            int x=q.front();
            q.pop();
            for(int j=0;j<n;j++){
                if(arr[x][j]==1 && visited[j]==0){
                    q.push(j);
                    visited[j]=1;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& arr) {
        int n=arr.size();
        visited.resize(n);
        int cn=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                helper(arr,i);
                cn++;
            }
        }
        return cn;
    }
};