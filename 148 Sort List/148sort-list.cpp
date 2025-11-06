class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* c=new ListNode(100);
        ListNode*temp=c;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                temp->next=a;
                a=a->next;
                temp=temp->next;
            }
            else{
                temp->next=b;
                b=b->next;
                temp=temp->next;
            }
        }
        if(a==NULL) temp->next=b;
        else temp->next=a;
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL ||head->next==NULL) return head;
        ListNode* temp=head;
        int sz=0;
        while(temp!=NULL){
            sz++;
            temp=temp->next;
        }
        temp=head;
        for(int i=1;i!=sz/2;i++){
            temp=temp->next;
        }
        ListNode* a=head;
        ListNode* b=temp->next;
        temp->next=NULL;
        a=sortList(a);
        b=sortList(b);
        ListNode* c=merge(a,b);
        return c;
    }
};