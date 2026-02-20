class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int j=2;
        int i=0;
        int cn=0;
        while(j<n){
            if(nums[j]-nums[j-1] == nums[j-1]-nums[j-2]){
                i++;
                cn+=i;
            }
            else i=0;
            j++;
        }
        return cn;
    }
};