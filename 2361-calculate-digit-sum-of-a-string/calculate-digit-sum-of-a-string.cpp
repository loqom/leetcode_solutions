class Solution {
public:
    string digitSum(string s, int k) {
        while(k<s.size()){
            string j;
            int n=s.size();
            for(int i=0;i<n;i+=k){
                int sm=0;
                for(int j=i;j<min(i+k,n);j++){
                    sm+=s[j]-'0';
                }
                j.append(to_string(sm));
            }
            s=j;
        }
        return s;
    }
};