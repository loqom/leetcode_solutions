class Solution {
public:
    int strbinaryToDecimal(string st) {
        int res = 0;
        for (char i : st) {
            res = res * 2 + (i - '0'); 
        }
        return res;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        string ans="";
        while(temp){
            int n=temp->val;
            char c=n+'0';
            ans+=c;
            temp=temp->next;
        }
        int y=strbinaryToDecimal(ans);
        return y;
    }
};