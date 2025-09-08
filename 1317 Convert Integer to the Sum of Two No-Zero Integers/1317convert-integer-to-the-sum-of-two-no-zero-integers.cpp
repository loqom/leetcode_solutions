class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> vec(2);
        for(int i=1;i<n;i++){
            int a=i;
            int b=n-i;
            if(a+b==n){
                int rem=a;
                int bl1=1;
                while(rem!=0){
                    if(rem%10==0) bl1=0;
                    rem/=10;
                }

                int rem2=b;
                int bl2=1;
                while(rem2!=0){
                    if(rem2%10==0) bl2=0;
                    rem2/=10;
                }

                if(bl1==1&&bl2==1){
                    vec[0]=a;
                    vec[1]=b;
                }
                
            }
        }
        return vec;
    }
};