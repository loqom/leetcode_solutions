class Solution {
public:
    bool check(int mid,int days,vector<int>& weights){
        int capacity=mid;
        int number=1;
        for(int i=0;i<weights.size();i++){
            if(capacity>=weights[i]){
                capacity-=weights[i];
            }
            else{
                capacity=mid;
                number++;
                capacity-=weights[i];
            }
        }
        if(number>days) return false;
        else return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            if(weights[i]>max) max=weights[i];
            sum+=weights[i];
        }
        int l=max;
        int h=sum;
        int midpt=sum;
        while(l<=h){
            int mid=(l+h)/2;
            if(check(mid,days,weights)){
                midpt=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return midpt;
    }
};