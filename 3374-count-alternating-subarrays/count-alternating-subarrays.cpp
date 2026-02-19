class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        int n=nums.size();
        long long cn=1;
        long long l=1;
        for(long i=1;i<n;i++){
            if(nums[i]!=nums[i-1]) l++;
            else l=1;
            cn+=l;
        }
        return cn;
    }
};