class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int a = max_element(nums.begin(),nums.end())-nums.begin();
        int b = min_element(nums.begin(),nums.end())-nums.begin();
        int L = max(a,b), R = min(a,b);
        return min({L+1 , n-R , R+1+n-L});
    }
};