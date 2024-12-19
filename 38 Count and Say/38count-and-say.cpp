class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str=countAndSay(n-1);
        string emp="";
        int repeat=1;
        char ch=str[0];
        for(int i=1;i<str.length();i++){
            if(ch==str[i]){
                repeat++;
            }
            else{
                emp=emp+to_string(repeat)+ch;
                repeat=1;
                ch=str[i];
            }

        }
        emp=emp+to_string(repeat)+ch;
        return emp;
    
    }
};