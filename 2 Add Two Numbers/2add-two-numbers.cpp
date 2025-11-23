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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(345);
        ListNode* c=l3;
        ListNode* ta=l1;
        ListNode* tb=l2;
        int cr=0;
        while(ta!=NULL || tb!=NULL || cr!=0){
            int j=(ta!=nullptr)?ta->val:0;
            int f=(tb!=nullptr)?tb->val:0;
            int sm=j+f+cr;
            cr=sm/10;
            ListNode* b=new ListNode(sm%10);
            c->next=b;
            c=b;
            if(ta) ta=ta->next;
            if(tb) tb=tb->next;
        }
        return l3->next;
    }
};