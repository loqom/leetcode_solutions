class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cn=0;
        int i=0;
        int j=0;
        int n=ransomNote.size();
        int m=magazine.size();
        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());
        while (i < n && j < m) {
            if (ransomNote[i] == magazine[j]) {
                i++;
                j++;
            }
            else if (ransomNote[i] > magazine[j]) j++;
            else return false;
            
        }

        return i == n;
    }
};