class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];
        for(int i=1;i<n;i++) mx=max(mx,nums[i]);    
        vector<int> arr(mx);
        for(int i=0;i<n;i++){
            arr[nums[i]-1]++;
        }
        int ms=arr[0];
        for(int i=1;i<arr.size();i++) ms=max(ms,arr[i]); 
        int cn=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==ms) cn+=ms;
        }
        return cn;
    }
};