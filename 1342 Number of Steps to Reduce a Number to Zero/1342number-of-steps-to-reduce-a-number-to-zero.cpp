class Solution {
public:
    int numberOfSteps(int num) {
        int u=1;
        int cn=0;
        while(u<num){
            u=u*2;
            cn++;
        }
        if(num==u) return cn+1;
        int diff=u-num;
        cn=cn+diff;
        return cn;
        

    }
};