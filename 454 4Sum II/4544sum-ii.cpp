class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        // int ans=0;
        // for(int a:nums1){
        //     for(int b:nums2){
        //         for(int c:nums3){
        //             for(int d:nums4){
        //                 if(a+b+c+d==0)
        //                 ans++;
        //             }
        //         }
        //     }
        // }
        // return ans;



        // int ans=0;
        // unordered_map<int,int> m;
        // for(int a:nums1){
        //     m[a]++;
        //     for(int b:nums2){
        //         for(int c:nums3){
        //             for(int d:nums4){
        //                 ans+=m[-(b+c+d)];

        //             }
        //         }
        //     }
        // }
        // return ans;



        int ans=0;
        unordered_map<int,int>m;
        for(int a:nums1){
            for(int b:nums2){
                m[a+b]++;

            }
        }

        for(int c:nums3){
            for(int d:nums4){
               ans+=m[-(c+d)];

            }
        }



        return ans;



    }
};