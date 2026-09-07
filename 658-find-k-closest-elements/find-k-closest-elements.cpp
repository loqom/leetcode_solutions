class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        priority_queue<pair<int,int>> hp;
        for(int i=0;i<n;i++) {
            pair<int,int> p;
            p.first=abs(x-arr[i]);
            p.second=arr[i];
            hp.push(p);
            if(hp.size()>k) hp.pop();
        }
        vector<int> ans(k);
        for(int i=0;i<k;i++){
            ans[i]=hp.top().second;
            hp.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};