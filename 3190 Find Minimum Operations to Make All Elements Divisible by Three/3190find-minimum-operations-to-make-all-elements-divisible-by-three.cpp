class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int opr=0;
        for(int i=0;i<n;i++){
            int rem=nums[i]%3;
            opr+=min(rem,3-rem);
        }
        return opr;
    }
};