class Solution {
public:
    int totalMoney(int n) {
        int p=1;
        int sum=0;
        int prev=1;
        for(int i=1;i<=n;i++){
            sum+=p;
            p++;
            if(i%7==0){
                prev++;
                p=prev;
            }
        }
        return sum;
    }
};