class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n=apple.size();
        int m=capacity.size();
        int sum=0;
        for(int i:apple) sum+=i;
        int cn=0;
        int h=0;
        sort(capacity.rbegin(),capacity.rend());
        for(int j:capacity){
            h+=j;
            cn++;
            if(h>=sum) return cn; 
        }
        return cn;

    }
};