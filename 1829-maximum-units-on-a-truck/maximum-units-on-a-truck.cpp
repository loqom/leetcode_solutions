bool cmp(vector<int> &a,vector<int> &b){
    return a[1]>b[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& arr, int truckSize) {
        sort(arr.begin(),arr.end(),cmp);
        int p=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i][0]<=truckSize){
                p+=arr[i][1]*arr[i][0];
                truckSize-=arr[i][0];
            }
            else{
                p+=truckSize*arr[i][1];
                truckSize=0;
            }

        }
        return p;
    }
};