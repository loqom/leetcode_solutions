class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        int cn=0;
        unordered_set<string> set;
        for(string i:words) set.insert(i);
        for(int i=0;i<n;i++){
            string s = words[i];
            reverse(s.begin(),s.end());
            if(s==words[i]) continue;
            if(set.find(s)!=set.end()){
                cn++;
                set.erase(words[i]);
            }
        }

        return cn;
    }
};