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
    bool isValidSudoku(vector<vector<char>>& arr) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(arr[i][j]=='.') continue;
                char num=arr[i][j];
                arr[i][j]='.';
                if(isSafe(arr,i,j,num)==false) return false;
                arr[i][j]=num;
            }
        }
        return true;
    }
};