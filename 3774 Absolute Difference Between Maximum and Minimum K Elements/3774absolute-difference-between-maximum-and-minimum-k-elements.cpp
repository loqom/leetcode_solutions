class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mn=0;
        int mx=0;
        int n=nums.size();
        for(int i=0;i<k;i++) mn+=nums[i];
        for(int i=0;i<k;i++) mx+=nums[n-i-1];
        return mx-mn;
    }
};