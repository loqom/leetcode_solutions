class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=0;
        for (int i:nums){
            if(i>mx) mx=i;
        }
        int cn=0;
        for(int i:nums){
            while(i!=mx){
                i++;
                cn++;
            }
        }
        return cn;
    }
};