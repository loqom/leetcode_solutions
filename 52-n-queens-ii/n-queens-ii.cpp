class Solution {
public:
    int cn;
    bool isSafe(vector<vector<char>> &ans,int row,int col){
        int n=ans.size();
        for(int i=0;i<n;i++) if(ans[i][col]=='Q') return false;
        for(int j=0;j<n;j++) if(ans[row][j]=='Q') return false;
        int i=row;
        int j=col;
        while(i<n && j<n) {
            if(ans[i][j]=='Q') return false;
            i++;
            j++;
        }
        i=row;
        j=col;
        while(i>=0 && j>=0) {
            if(ans[i][j]=='Q') return false;
            i--;
            j--;
        }
        i=row;
        j=col;
        while(i<n && j>=0) {
            if(ans[i][j]=='Q') return false;
            i++;
            j--;
        }
        i=row;
        j=col;
        while(i>=0 && j<n) {
            if(ans[i][j]=='Q') return false;
            i--;
            j++;
        }
        return true;

    }
    void helper(int row,vector<vector<char>> &ans){
        int n=ans.size();
        if(row==n){
            cn++;
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(ans,row,j)){
                ans[row][j]='Q';
                helper(row+1,ans);
                ans[row][j]='.';
            }
        }
    }
    int totalNQueens(int n) {
        cn=0;
        vector<vector<char>> ans(n,vector<char>(n,'.'));
        helper(0,ans);
        return cn;
    }
};