class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prf(n);
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            prf[i]=gcd(nums[i],mx);
        }
        sort(prf.begin(),prf.end());
        int i=0,j=n-1;
        long long sm=0;
        while(i!=j && i<j){
            sm+=gcd(prf[i],prf[j]);
            i++;
            j--;
        }
        return sm;
    }
};