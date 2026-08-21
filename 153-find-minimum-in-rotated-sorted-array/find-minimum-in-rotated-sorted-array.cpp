class Solution {
public:
    int findMin(vector<int>& arr) {
        int lo=0;
        int hi=arr.size()-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(arr[mid]>arr[hi]) lo=mid+1;
            else hi=mid;
        }
        return arr[lo];
    }
};