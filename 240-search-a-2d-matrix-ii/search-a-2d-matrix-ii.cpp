class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            // if(matrix[i][0]>target) continue;     
            int lo=0;
            int hi=m-1;
            while(lo<=hi){
                int mid=(lo+hi)/2;
                if(matrix[i][mid]==target) return true;
                else if(matrix[i][mid]>target) hi=mid-1;
                else lo=mid+1;
            }
            
        }
        return false;
    }
};