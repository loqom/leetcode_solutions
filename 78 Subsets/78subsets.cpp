class Solution {
public:
    void subsets(vector<vector<int>> &final,vector<int>nums,vector<int> v,int idx){
        if(nums.size()==idx){
            final.push_back(v);
            return;
        }
        subsets(final,nums,v,idx+1);
        v.push_back(nums[idx]);
        subsets(final,nums,v,idx+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> final;
        vector<int>v;
        subsets(final,nums,v,0);
        return final;
        
    }
};