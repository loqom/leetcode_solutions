class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int lo=nums[0];
        int hi=nums[n-1];
        vector<int> ans;
        int i=0;
        while(lo<=hi){
            if(nums[i]==lo){
                i++;
                lo++;
            }
            else {
                ans.push_back(lo);
                lo++;
            }
        }
        return ans;
    }
};