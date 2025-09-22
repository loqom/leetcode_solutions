class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        bool check=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                while(nums[l]!=target) l++;
                while(nums[h]!=target) h--;
                check=1;
                break;
            }
            else if(nums[mid]>target) h=mid-1;
            else l=mid+1;
        }
        vector<int>res(2);
        if(check==0){
            res[0]=-1;
            res[1]=-1;
            return res;
        }
        res[0]=l;
        res[1]=h;
        return res;
    }
};