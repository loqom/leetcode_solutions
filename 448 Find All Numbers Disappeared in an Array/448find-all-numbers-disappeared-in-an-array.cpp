class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]==nums[nums[i]-1]) i++;
            else swap(nums[i],nums[nums[i]-1]);
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) res.push_back(i+1);
        }
        return res;
    }
};