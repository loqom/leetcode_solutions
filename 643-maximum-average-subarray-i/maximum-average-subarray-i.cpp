class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(k>=nums.size()){
            int sum=0;
            for(int i=0;i<k;i++) sum+=nums[i];
            return (double)sum/k;
        }
        int n=nums.size();
        double avg=0;
        int sum=0;
        for(int i=0;i<k;i++) sum+=nums[i];
        avg=sum/k;
        int i=0;
        int j=k;
        int mx=sum;
        while(i<=n-k){
            sum=sum-nums[i];
            sum=sum+nums[j];
            i++;
            j++;
            mx=max(mx,sum);
        }
        avg=(double)mx/k;
        return avg;
    }
};