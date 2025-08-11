class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int z=m+n-1;
        int m1=m-1;
        int m2=n-1;
        while(m2>=0){
           
            if(m1>=0&&nums2[m2]<nums1[m1]){
                
                nums1[z]=nums1[m1];
                m1--;
            }
            else  {
                nums1[z]=nums2[m2];
                m2--;
                
            }
            z--;
        }
        return ;
    }
};