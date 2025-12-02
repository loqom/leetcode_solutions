class Solution {
public:
    int numWaterBottles(int a, int b) {
        int d=0;
        int e=0;
        while(a){
            a--;
            d++;
            e++;
            if(e==b){
                e=0;
                a++;
            }
        }
        return d;
    }
};