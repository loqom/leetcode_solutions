class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        if(n%2==0){
            for(int i=0;i<n;i+=2){
                int x=i;
                arr[i]=++x;
                arr[i+1]=(-1)*(arr[i]);
            }
            return arr;
        }
        else {
            arr[n/2]=0;
            for(int i=0;i<n-1;i+=2){
                int y=i;
                arr[i]=++y;
                arr[i+1]=(-1)*(arr[i]);
            }
            return arr;

            }
        }
    
};