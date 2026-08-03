class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp1(n);
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--) if(nums[j] < nums[i])  dp1[i]=max(dp1[i],dp1[j]);
            dp1[i]+=1;
        }
        vector<int> dp2(n);
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++) if(nums[j] < nums[i])  dp2[i]=max(dp2[i],dp2[j]);
            dp2[i]+=1;
        }
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(dp1[i]>1 && dp2[i]>1){
                int diff=dp1[i]+dp2[i]-1;
                mx=max(diff,mx);
            }
        }
        if(mx<3) return 0;
        return n-mx;
    }
};