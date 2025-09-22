/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long i=1;
        long long j=n;
        while(i<=j){
            long long gus=(i+j)/2;
            int h=guess(gus);
            if(h==0) return gus;
            else if(h==1) i=gus+1;
            else j=gus-1;
        }
        return -1;
    }
};