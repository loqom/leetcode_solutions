class Solution {
public:
   ListNode* reverseList(ListNode* head) {
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*Next;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        ListNode* s=new ListNode(12);
        ListNode* i=s;
        while(temp){
            ListNode* c=new ListNode(temp->val);
            i->next=c;
            temp=temp->next;
            i=i->next;
        }
        s=s->next;
        s=reverseList(s);
        temp=head;
        i=s;
        while(temp){
            if(temp->val!=i->val) return false;
            temp=temp->next;
            i=i->next;
        }
        return true;

    }
};