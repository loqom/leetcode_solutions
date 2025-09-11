class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        int cn=0;
        vector<char> arr;
        vector<int> arr2;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                arr.push_back(s[i]);
                arr2.push_back(i);
            }
        }
        sort(arr.begin(),arr.end());
        for(int j=0;j<arr2.size();j++){
            s[arr2[j]]=arr[j];
        }
        return s;
    }
};