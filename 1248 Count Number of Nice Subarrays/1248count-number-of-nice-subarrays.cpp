class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int cn=0,pr=0;
        // for(int i=0;i<n;i++){
        //     int odcn=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]%2!=0) odcn++;
        //         if(odcn==k) cn++
        //     }
        // }
        // return cn;
        int res=0;
        int i=0,j=0;
        while(j<n){
            if(nums[j]%2==1){
                cn++;
                pr=0;
                
            }
            while(cn==k){
                pr++;
                if(nums[i]%2==1) cn--;
                i++;
            }
            res+=pr;
            j++;
        }
        return res;
    }
};