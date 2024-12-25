class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=1;
        int n=arr.size();
        int h=n-2;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
                
            }
            else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]) l=mid+1;
            else if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1]) h=mid-1;
        }
        return -1;
    }
};