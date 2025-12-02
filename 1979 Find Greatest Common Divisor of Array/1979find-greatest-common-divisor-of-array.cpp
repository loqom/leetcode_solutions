class Solution {
public:
    int gcf(int a,int b){
        if(a==0){
            return b;
        }
        return gcf(b%a,a);
    }
    int findGCD(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        int r=gcf(mx,mn);
        return r;
    }
};