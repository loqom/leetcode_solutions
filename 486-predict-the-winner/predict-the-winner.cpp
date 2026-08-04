class Solution {
public:
    int helper(int i,int j,vector<int> &nums){
        if (i == j) return nums[i];
        return max(nums[i]-helper(i+1,j,nums),nums[j]-helper(i,j-1,nums));
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        return helper(0,n-1,nums)>=0;
    }
};