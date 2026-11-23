class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid[0].size();
        int n=grid.size();
        int cn=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    // if( j+1<m && grid[i][j+1]!=1) cn++;
                    // if( i-1>=0 && grid[i-1][j]!=1) cn++;
                    // if( j-1>=0 && grid[i][j-1]!=1) cn++;
                    // if( i+1<n && grid[i+1][j]!=1) cn++;
                    if((j == 0) || (grid[i][j-1] == 0)) cn++;
                    if((j == m - 1) || (grid[i][j+1] == 0)) cn++;
                    if((i == 0) || (grid[i-1][j] == 0)) cn++;
                    if((i == n - 1) || (grid[i+1][j] == 0)) cn++;
                }
            }
        }
        return cn;
    }
};