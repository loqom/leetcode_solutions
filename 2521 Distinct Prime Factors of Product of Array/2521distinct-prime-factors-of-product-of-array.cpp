class Solution {
public:
    void flsieve(vector<int>&sieve){
        int n=sieve.size()-1;
        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*2;j<=n;j+=i){
                sieve[j]=0;
            }
        }

    }
    int distinctPrimeFactors(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++) mx=max(mx,nums[i]);
        vector<int> sieve(mx+1,1);
        if(mx+1>0) sieve[0]=0;
        if(mx+1>1) sieve[1]=0;
        flsieve(sieve);
        vector<int> prime;
        for(int i=2;i<=mx;i++) if(sieve[i]==1) prime.push_back(i);
        vector<bool> took(prime.size(),0);
        for(int i=0;i<n;i++){
            for(int j=0;j<prime.size();j++){
                if(prime[j]>nums[i]) break;
                if(nums[i]%prime[j]==0) took[j]=1;
            }
        }
        int cn=0;
        for(int i=0;i<took.size();i++){
            if(took[i]==1) cn++;
        }
        return cn;
    }
};