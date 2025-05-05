class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long sum=0;
        int n=x;
        while(n!=0){
            int rem=n%10;
            sum=sum*10+rem;
            n=n/10;

        }
        if(sum==x) return true;
        else return false;
    }
};