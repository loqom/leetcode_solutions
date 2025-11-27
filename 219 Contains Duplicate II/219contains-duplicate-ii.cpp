class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> hm;
        for(int i=0;i<n;i++){
            if(hm.contains(nums[i]) && i-hm[nums[i]]<=k) return true;
            hm[nums[i]]=i;
        }
        return false;
    }
};