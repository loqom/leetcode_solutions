class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.length();
        vector<int> pre(n+1);
        vector<int> suf(n+1);
        
        int cn=0;
        for(int i=0;i<n+1;i++){
            
            pre[i]=cn;
            if(customers[i]=='N') cn++;

        }
        int pn=0;
        for(int i=n-1;i>=0;i--){
            if(customers[i]=='Y') pn++;
            suf[i]=pn;
        }
        
        int min=INT_MAX;
        for(int i=0;i<n+1;i++){
            pre[i]=pre[i]+suf[i];
            if(pre[i]<min) min=pre[i];
        }
        for(int i=0;i<n+1;i++){
            if(pre[i]==min) return i;
        }
        return n;
    }
};