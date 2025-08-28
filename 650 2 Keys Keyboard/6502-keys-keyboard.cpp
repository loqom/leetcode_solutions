class Solution {
public:
    int gcc(int n){
        for(int i=n/2;i>=0;i--){
            if(n%i==0) return i;
        }
        return 1;
    }
    int minSteps(int n) {
        int cn=0;
        while(n>1){
            int hf=gcc(n);
            cn+=(n/hf);
            n=hf;
        }
        return cn;  

    }
};