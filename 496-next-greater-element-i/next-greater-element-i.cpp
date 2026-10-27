class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        int n=nums1.size();
        int m=nums2.size();
        stack<int> st;
        st.push(nums2[m-1]);
        for(int i=m-2;i>=0;i--){
            int a=nums2[i];
            while(st.size()>0 && st.top()<nums2[i]) st.pop();
            if(st.size()==0) mp[a]=-1;
            else mp[a]=st.top();
            st.push(nums2[i]); 
        }
        vector<int> ans;
        for(int i:nums1) ans.push_back(mp.count(i) ? mp[i] : -1 );
        return ans;
    }
};