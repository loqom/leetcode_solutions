class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n, vector<int>(n, 0));
        int cn = 0;
        int t = 1;
        int minr = 0;
        int maxr = n - 1;
        int minc = 0;
        int maxc = n - 1;
        int total = n * n;
        
        while (cn < total) {
            for (int j = minc; j <= maxc && cn < total; j++) {
                a[minr][j] = t++;
                cn++;
            }
            minr++;
            
            for (int i = minr; i <= maxr && cn < total; i++) {
                a[i][maxc] = t++;
                cn++;
            }
            maxc--;
            
            for (int j = maxc; j >= minc && cn < total; j--) {
                a[maxr][j] = t++;
                cn++;
            }
            maxr--;
            
            for (int i = maxr; i >= minr && cn < total; i--) {
                a[i][minc] = t++;
                cn++;
            }
            minc++;
        }
        return a;
    }
};