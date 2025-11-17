class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL  || head->next==NULL) return head;
        ListNode* s=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return s;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* o=slow->next;
        
        ListNode* k=reverseList(o);
        slow->next=NULL; 
        ListNode* j=new ListNode(10);
        ListNode* i=j;
        ListNode* a=head;
        ListNode* b=k;
        while(a!=NULL && b!=NULL){
            i->next=a;
            a=a->next;
            i=i->next;

            i->next=b;
            b=b->next;
            i=i->next;            
        }
        if(a==NULL) i->next=b;
        else i->next=a;
        // i->next=NULL;
        head=j->next;
    }
};