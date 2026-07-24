class Solution {
public:
    ListNode* reverse(ListNode* head){
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
    int pairSum(ListNode* head) {
        if(head->next->next==NULL) return head->val+head->next->val;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=reverse(slow);
        int mx=INT_MIN;
        ListNode* temp2=head;
        while(temp!=NULL){
            int sm=temp->val+temp2->val;
            mx=max(mx,sm);
            temp=temp->next;
            temp2=temp2->next;
        }
        return mx;
    }
};