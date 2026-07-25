class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        int u=stoi(s);
        return (u%10)*((u/10%10));
    }
};