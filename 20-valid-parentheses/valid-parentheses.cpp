class Solution {
public:
    bool isValid(string s) {
        if (s.size()%2!=0) return false;
        stack <char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
            else{
                if(st.size()>0 && ( (st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']') ) ) st.pop();
                else return false;
            }
        }
        if(st.size()==0) return true;
        else return false;
    }
};