class Solution {
public:
    int maximum69Number (int num) {
        int x=num;
        
        vector<int>help;
        while(x!=0){
            int rem=x%10;
            help.push_back(rem);
        
            x/=10;
        }
        for(int i=help.size()-1;i>=0;i--){
            if(help[i]==6){
                help[i]=9;
                break;
            }
        }
        int ans=0;
        for(int i=help.size()-1;i>=0;i--){
            ans=ans*10+help[i];
        }

        return ans;
    }
};