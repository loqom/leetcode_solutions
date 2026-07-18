class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> mp1,mp2;
        for(char i:word1) mp1[i]++;
        for(char i:word2) mp2[i]++;
        for(auto i:mp1) if(mp2.find(i.first)==mp2.end()) return false;
        for(auto i:mp2) if(mp1.find(i.first)==mp1.end()) return false;
        unordered_map<int,int> res,ans;
        for(auto i:mp1) res[i.second]++;
        for(auto i:mp2) ans[i.second]++;
        for(auto i:res){
            if(ans.find(i.first)==ans.end()) return false;
            if(ans[i.first]!=res[i.first]) return false;
        }
        return true;
    }

};