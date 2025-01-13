class Solution {
public:
    bool isperf(int n){
        int r=sqrt(n);
        if(r*r==n){
            return true;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        int x=0;
        int y=c;
        while(x<=y){
            if(isperf(x)&&isperf(y)){
                return true;
            }
            else if(!isperf(y)){
                y=(int) sqrt(y)*(int) sqrt(y);
                x=c-y;
            }
            else{
                x=((int) sqrt(x)+1)*((int) sqrt(x)+1);
                y=c-x;
            }
        }
        return false;
    }
};