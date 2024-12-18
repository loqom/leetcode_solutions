class Solution {
public:
    void comb(vector<vector<int>> &vec,vector<int> v,vector<int> &ar,int target,int idx){
        if(target==0){
            vec.push_back(v);
            return;
        }
        if(target<0) return;
        for(int i=idx;i<ar.size();i++){
            v.push_back(ar[i]);
            comb(vec,v,ar,target-ar[i],i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> vec;
        vector<int> v;
        comb(vec,v,candidates,target,0);
        return vec;
    }
};