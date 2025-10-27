/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp=headA;
        int cn=1;
        while(temp->next!=NULL) {
            cn++;
            temp=temp->next;
        }
        ListNode *temp1=headB;
        int sn=1;
        while(temp1->next!=NULL){
            sn++;
            temp1=temp1->next;
        }
        int s;
        if(cn>sn) s=cn-sn;
        else s=sn-cn;
        temp=headA;
        temp1=headB;
        if(cn>sn){
            while(s!=0){
                temp=temp->next;
                s--;
            }
        }
        else{
            while(s!=0){
                temp1=temp1->next;
                s--;
            }
        }
        while(temp!=temp1){
            temp=temp->next;
            temp1=temp1->next;
        }
        
        return temp;

        // while (temp && temp1) {
        //     if (temp == temp1) return temp; 
        //     temp = temp->next;
        //     temp1 = temp1->next;
        // }
        // return nullptr;
    }
};