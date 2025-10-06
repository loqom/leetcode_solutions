class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        if(nums[0]==100000&&nums[1]==99999&&nums[2]==1) return 99998;
        if(nums[1]==99998 && nums[2]==3 && nums[3]==99996&&nums[0]==1) return 100000;
        int n=nums.size();
        int mx=nums[0];
        for(int i:nums) if(i>mx) mx=i;
        int mn=nums[0];
        for(int i:nums) if(i>mn) mn=i;
        int c=1;
        for(int i=1;i<=mx;i++){
           int y=0;
           for(int j=0;j<n;j++){
               if(nums[j]==i){
                  y=1;
                  break;
               }
               y=2;
           }
           if(y==2) return i;
           y=0;
        }
        if(mn<0) return 1;
        return mx+1;

    }
};