class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.length();
        string ans="";
        for(int i=0;i<=n-3;i++){
            string win="";
            for(int j=i;j<i+3;j++){
                win+=num[j];
            }
            if(win[0]==win[1] && win[1]==win[2]){
                if(win>ans){
                    ans=win;
                }
                
            }
        }
        
        return ans;
    }
};