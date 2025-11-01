class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        ListNode* temp=head;
        int cn=1;
        while(temp->next!=NULL) {
            temp=temp->next;
            cn++;
        }
        temp->next=head;
        temp=head;
        k=k%cn;
        for(int i=1;i<cn-k;i++) temp=temp->next;
        head=temp->next;
        temp->next=NULL;
        return head;

    }
};