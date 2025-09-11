class Solution {
public:
    int addDigits(int num) {
        
        while(num%10!=num){
            int sum=0;
            int z=num;
            while(z!=0){
                int rem=z%10;
                sum+=rem;
                z/=10;
            }
            num=sum;
        }
        return num;
    }
};