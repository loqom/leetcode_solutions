class Solution {
public:
    int totalWaviness(int num1, int num2) {
        if(num1/100==0 && num2/100==0) return 0;
        int wv=0;
        for(int i=num1;i<=num2;i++){
            int p=0;
            int v=0;
            string r=to_string(i);
            int k=r.size();
            for(int j=1;j<k-1;j++){
                int a=r[j]-'0';
                int b=r[j+1]-'0';
                int c=r[j-1]-'0';
                if(a>b && a>c) p++;
                if(a<b && a<c) v++;
            }
            wv=wv+p+v;
        }
        return wv;
    }
};