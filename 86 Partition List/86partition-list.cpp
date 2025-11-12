class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* tl=new ListNode(199);
        ListNode* th=new ListNode(99);
        ListNode* t1=tl;
        ListNode* t2=th;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                t1->next=temp;
                temp=temp->next;
                t1=t1->next;
            }
            else{
                t2->next=temp;
                temp=temp->next;
                t2=t2->next;
            }
        }
        t1->next=th->next;
        t2->next=NULL;
        return tl->next; 

    }
};