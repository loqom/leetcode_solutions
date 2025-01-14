class Solution {
public:
    bool check(vector<int>& piles,int h,int mid){
        int sped=0;
        for(int i=0;i<piles.size();i++){
            if(sped>h) return false;
            if(mid>=piles[i]) sped++;
            else if(piles[i]%mid==0) sped+=piles[i]/mid;
            else sped+=piles[i]/mid+1;
        }
        if(sped>h) return false;
        else return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max) max=piles[i];
        }
        int l=1;
        int u=max;
        int ans=max;
        while(l<=u){
            int mid=(l+u)/2;
            if(check(piles,h,mid)){
                ans=mid;
                u=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};