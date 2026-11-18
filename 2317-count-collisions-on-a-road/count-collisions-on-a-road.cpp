class Solution {
public:
    int countCollisions(string arr) {
        int n=arr.size();
        string s="";
        int x=0;
        int y=n-1;
        while (x < n && arr[x] == 'L') x++;
        while (y >= 0 && arr[y] == 'R') y--;
        int cn=0;
        while(x<=y){
            if(arr[x]!='S') cn++;
            x++;
        }
        return cn;
    }
};