class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* help=new ListNode(12);
        ListNode* t2=help;
        t2->next=head;
        while(temp){
            if(temp->next && (temp->val==temp->next->val)){
                while(temp->next && (temp->val==temp->next->val)) temp=temp->next;
                t2->next=temp->next;
            }
            
            else  t2=t2->next;
            temp=temp->next;
        }
        return help->next;
    }
};