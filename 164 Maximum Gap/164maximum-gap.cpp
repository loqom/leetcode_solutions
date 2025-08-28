class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<2) return 0;
        int mind=INT_MIN;
        for(int i=0;i<n-1;i++){
            int minx=nums[i+1]-nums[i];
            mind=max(mind,minx);
        }
        return mind;
    }
};