class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        st.push(nums[n-1]);
        vector<int> ans(n,-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()<=nums[i]) st.pop();
            if(st.size()==0) ans[i]=-1;
            else ans[i]=st.top(); 
            st.push(nums[i]);
        }
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i]) st.pop();
            if (ans[i] == -1 && !st.empty())ans[i] = st.top();
            st.push(nums[i]);
        }

        return ans;
    }
};