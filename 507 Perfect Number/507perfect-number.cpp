class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return false;
        int sm=1;
        for(int i=2;i<sqrt(num);i++){
            if(num%i==0){
                sm=sm+(num/i)+i;
            }
        }
        
        return (sm==num);
    }
};