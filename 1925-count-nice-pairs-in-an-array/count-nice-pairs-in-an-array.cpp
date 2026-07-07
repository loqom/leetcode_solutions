class Solution {
public:
    int reverse(int n){
        int r=0;
        while(n>0){
            r*=10;
            r+=(n%10);
            n/=10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++) nums[i]=nums[i]-reverse(nums[i]);   
        unordered_map<int,int> mp;
        int cn=0;
        for(int i=0;i<n;i++){
            cn=cn%1000000007;
            if(mp.find(nums[i])!=mp.end())  cn+=mp[nums[i]];
            mp[nums[i]]++;
        }
        return cn%1000000007;
    }
};