class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        vector<ListNode*> res;
        int size=n/k;
        int rem=n%k;
        temp=head;
        while(temp!=NULL){
            ListNode* tempC=new ListNode(12);
            ListNode* t=tempC;
            int s=size;
            if(rem>0) s++;
            rem--;
            for(int i=1;i<=s;i++){
                t->next=temp;
                temp=temp->next;
                t=t->next;
            }
            t->next=NULL;
            res.push_back(tempC->next);
        }
        if(res.size()<k){
            int ex=k-res.size();
            for(int i=1;i<=ex;i++) res.push_back(NULL);
        }
        return res;
    }
};