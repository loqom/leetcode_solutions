class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cn=1;
        int mx=nums[n-1];
        for(int i=n-2;i>=0;i--){            
            if(nums[i]!=mx){
                mx=nums[i];
                cn++;
            }
            if(cn==3) return nums[i];
        }
        return nums[n-1];
    }
};