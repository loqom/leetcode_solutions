/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode* temp=head;
        // int sz=0;
        // while(temp!=NULL){
        //     sz++;
        //     temp=temp->next;
        // }
        // if(sz==n){
        //     head=head->next;
        //     return head;
        // }
        // temp=head;
        // ListNode* prev=temp;
        // for(int i=0;i==0 || i!=sz-n ;i++){
        //     prev=temp;
        //     temp=temp->next;
        // }
        // prev->next=temp->next;
        // return head;


        ListNode* slow=head;
        ListNode* fast=head;
        for(int i=1;i<=n+1;i++){
            if(fast==NULL) return head->next;
            fast=fast->next;
        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};