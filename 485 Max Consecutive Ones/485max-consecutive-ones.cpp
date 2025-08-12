class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int cn=0;
        int mx=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1) cn++;
            if(nums[i]==0 || i==n-1){
                mx=max(cn,mx);
                cn=0;
            }
        }
        return mx;
    }
};