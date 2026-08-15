class Solution {
public:
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
    void helper(int row,vector<vector<char>> &ans,vector<vector<string>> &arr){
        int n=ans.size();
        if(row==n){
            vector<string> brr;
            for(int i=0;i<n;i++){
                string s="";
                for(int j=0;j<n;j++) s+=ans[i][j];
                brr.push_back(s);
            }
            if(brr.size()!=0) arr.push_back(brr);
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(ans,row,j)){
                ans[row][j]='Q';
                helper(row+1,ans,arr);
                ans[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> arr;
        vector<vector<char>> ans(n,vector<char>(n,'.'));
        helper(0,ans,arr);
        return arr;
    }
};