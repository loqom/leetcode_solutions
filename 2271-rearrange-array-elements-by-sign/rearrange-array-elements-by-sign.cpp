class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int j=0,k=0;
        int u=n/2;
        vector<int> pos(u);
        vector<int> neg(u);
        for(int i=0;i<n;i++){
            if(nums[i]>0) pos[j++]=nums[i];
            else neg[k++]=nums[i];
        }
        j=0,k=0;
        for(int i=0;i<n;i++){
            if(i%2==0) nums[i]=pos[j++];
            else nums[i]=neg[k++];
        }
        return nums;
    }
};