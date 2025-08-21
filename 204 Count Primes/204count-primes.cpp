class Solution {
public:
    void func(vector<bool> &arr){
        int n=arr.size()-1;
        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*2;j<=n;j+=i){
                arr[j]=0;
            }
        }
    }
    int countPrimes(int n) {
        if(n<=2) return 0;
        n--;
        vector<bool> arr(n+1,1);
        int cn=0;
        func(arr);
        arr[0]=1;
        arr[1]=0;
        for(int i=2;i<=n;i++){
            if(arr[i]==1) cn++;
        }
        return cn;
    }
};