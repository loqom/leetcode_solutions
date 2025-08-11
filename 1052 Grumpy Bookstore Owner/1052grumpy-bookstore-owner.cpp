class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        //calc sum of first min elem for sliding 
        int pr=0;
        for(int i=0;i<minutes;i++){
            pr += (grumpy[i] == 1 ? customers[i] : 0);
        }
        int j=minutes;
        int mx=pr;
        int mdx=0;
        int i=1;
        while(j<customers.size()){
            int fn=pr;
            if(grumpy[j]==1) fn+=customers[j];
            if(grumpy[i-1]==1) fn-=customers[i-1];
            
            if(fn>mx){
                mx=fn;
                mdx=i;
            }
            pr=fn;
            i++;
            j++;
        }
        for(int k=mdx;k<mdx+minutes;k++){
            grumpy[k]=0;
        }
        int sum=0;
        for(int o=0;o<customers.size();o++){
            if(grumpy[o]==0) sum+=customers[o];
        }
        return sum;

    }
};