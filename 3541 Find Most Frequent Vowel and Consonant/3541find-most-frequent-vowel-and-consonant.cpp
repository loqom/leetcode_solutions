class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>arr(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            // if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            //     arr[s[i]-'a']++;
            // }
            // else {
            //     arr[]
            // }
            arr[s[i]-'a']++;
        }
        int maxvow=0;
        for(int i=0;i<25;i++){
            if(i==0||i==4||i==8||i==14||i==20){
                maxvow=max(maxvow,arr[i]);
            }
            
        }
        int maxcont=0;
        for(int i=0;i<=25;i++){
            if(i==0||i==4||i==8||i==14||i==20) continue;
            else maxcont=max(maxcont,arr[i]);
        }
        int sum=maxvow+maxcont;
        return sum;

    }
};