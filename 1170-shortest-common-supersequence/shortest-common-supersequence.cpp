class Solution {
public:
    string longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size();
        int n2 = text2.size();

        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));

        for (int i = 1; i <= n1; i++) {
            for (int j = 1; j <= n2; j++) {
                if (text1[i - 1] == text2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        int i = n1, j = n2;
        string s = "";

        while (i > 0 && j > 0) {
            if (text1[i - 1] == text2[j - 1]) {
                s.push_back(text1[i - 1]);
                i--;
                j--;
            }
            else if (dp[i - 1][j] >= dp[i][j - 1]) {
                i--;
            }
            else {
                j--;
            }
        }

        reverse(s.begin(), s.end()); 

        return s;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        string lcs=longestCommonSubsequence(str1,str2);
        int i=0,j=0,k=0;
        string scs="";
        while(i<str1.size() && j<str2.size() && k<lcs.size()){
            while(str1[i]!=lcs[k]) scs+=str1[i++];
            while(str2[j]!=lcs[k]) scs+=str2[j++];
            scs+=lcs[k++];
            i++;
            j++;
        }
        while(j<str2.size()) scs+=str2[j++];
        while(i<str1.size()) scs+=str1[i++];
        return scs;
    }
};