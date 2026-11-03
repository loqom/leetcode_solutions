class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mx=nums[n-1];
        int cn=0;
        for(int i:nums) cn+=abs(mx-i);
        return cn; 
        
    }
};