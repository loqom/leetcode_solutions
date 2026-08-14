class Solution {
public:
    void helper(vector<int>& nums,vector<int>& arr,vector<vector<int>> & ans,vector<bool>& brr){
        if(nums.size()==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(brr[i]!=true){
                arr.push_back(nums[i]);
                brr[i]=true;
                helper(nums,arr,ans,brr);
                brr[i]=false;
                arr.pop_back();
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> arr;
        vector<vector<int>> ans;
        vector<bool> brr(nums.size(),false);
        helper(nums,arr,ans,brr);
        return ans;
    }
};