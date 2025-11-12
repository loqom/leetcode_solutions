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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* tl=new ListNode(199);
        ListNode* th=new ListNode(99);
        ListNode* t1=tl;
        ListNode* t2=th;
        ListNode* temp=head;
        int cn=1;
        while(temp!=NULL){
            if(cn%2!=0){
                t1->next=temp;
                temp=temp->next;
                t1=t1->next;
                cn++;
            }
            else{
                t2->next=temp;
                temp=temp->next;
                t2=t2->next;
                cn++;
            }
        }
        t1->next=th->next;
        t2->next=NULL;
        return tl->next; 
    }
};