class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int cn=0;
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=cn){
                ans&=nums[i];
            }
            cn++;
        }
        return (ans==-1) ? 0 : ans;
    }
};