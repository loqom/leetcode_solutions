class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int flips=0;
        int i=0,j=0;
        int m;
        int mx=INT_MIN;
        int n=nums.size();
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flips<k){
                    flips++;
                    j++;
                }
                else{
                    m=j-i;
                    mx=max(m,mx);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        m=j-i;
        mx=max(m,mx);
        return mx;
    }
};