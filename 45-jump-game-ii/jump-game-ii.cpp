class Solution {
public:
    int jump(vector<int>& nums) {
        int mx=0,cn=0,e=0;
        for(int i=0;i<nums.size()-1;i++){
            // if(mx>=nums.size()-1) return cn;
            mx=max(mx,i+nums[i]);
            if(e==i){
                e=mx;
                cn++;
                if(mx>nums.size()-1) return cn;
            }
        }
        return cn;
    }
};