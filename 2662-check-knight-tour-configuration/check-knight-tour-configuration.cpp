class Solution {
public:
    bool helper(vector<vector<int>> &grid,int row,int col,int num){
        int n=grid.size();
        if((n*n)-1==num) return true;
        int i,j;
        i=row-2;
        j=col+1;
        if(i>=0 && j<n && grid[i][j]==num+1) return helper(grid,i,j,num+1);
        i=row-2;
        j=col-1;
        if(i>=0 && j>=0 && grid[i][j]==num+1) return helper(grid,i,j,num+1);
        i=row+2;
        j=col+1;
        if(j<n && i<n && grid[i][j]==num+1) return helper(grid,i,j,num+1);
        i=row+2;
        j=col-1;
        if(j>=0 && i<n && grid[i][j]==num+1) return helper(grid,i,j,num+1);
        i=row-1;
        j=col-2;
        if(i>=0 && j>=0 && grid[i][j]==num+1) return helper(grid,i,j,num+1);
        i=row+1;
        j=col-2;
        if(i<n && j>=0 && grid[i][j]==num+1) return helper(grid,i,j,num+1);
        i=row-1;
        j=col+2;
        if(i>=0 && j<n && grid[i][j]==num+1) return helper(grid,i,j,num+1);
        i=row+1;
        j=col+2;
        if(i<n && j<n && grid[i][j]==num+1) return helper(grid,i,j,num+1);
        return false;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        if(grid[0][0]!=0) return false;
        return helper(grid,0,0,0);
    }
};