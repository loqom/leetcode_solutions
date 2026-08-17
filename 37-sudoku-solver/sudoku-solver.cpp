class Solution {
public:
    bool isSafe(vector<vector<char>>& arr,int row,int col,char num){
        for(int i=0;i<9;i++) if(arr[i][col]==num) return false;
        for(int i=0;i<9;i++) if(arr[row][i]==num) return false;
        int sr=(row/3)*3;
        int sc=(col/3)*3;
        for(int i=sr;i<sr+3;i++){
            for(int j=sc;j<sc+3;j++) if(arr[i][j]==num) return false;
        }
        return true;
    }
    void helper(vector<vector<char>>& arr,int row,int col,vector<vector<char>>& brr){
        if(row==9){
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    brr[i][j]=arr[i][j];
                }
            }
            return;
        }
        if(arr[row][col]!='.'){
            if(col<8) helper(arr,row,col+1,brr);
            else helper(arr,row+1,0,brr);
        }
        else{
            for(char i='1';i<='9';i++){
                if(isSafe(arr,row,col,i)){
                    arr[row][col]=i;
                    if(col<8) helper(arr,row,col+1,brr);
                    else helper(arr,row+1,0,brr);
                    arr[row][col]='.';
                }
            }
        }
    }
    void solveSudoku(vector<vector<char>>& arr) {
        vector<vector<char>> brr(9, vector<char>(9, '.'));
        helper(arr,0,0,brr);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                arr[i][j]=brr[i][j];
            }
        }
    }
};