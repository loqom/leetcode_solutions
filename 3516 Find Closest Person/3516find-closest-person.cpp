class Solution {
public:
    int findClosest(int x, int y, int z) {
        int sumx=z-x;
        int sumy=z-y;
        if(sumx<0 || sumy<0){
            if(sumx<0) sumx*=-1;
            if(sumy<0) sumy*=-1;
        }
        if(sumx==sumy) return 0;
        if(min(sumx,sumy)==sumx) return 1;
        else return 2;
    }
};