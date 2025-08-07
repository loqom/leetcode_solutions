class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        vector<int> res(m);
        for(int j=0;j<m;j++){
            int cn=0;
            int lo=0;
            int hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]>queries[j]){
                    
                   hi=mid-1;
                }
                
                else{
                    lo=mid+1;
                    cn=mid+1;
                }
            }
            res[j]=cn;
        }
        return res;
    }
};