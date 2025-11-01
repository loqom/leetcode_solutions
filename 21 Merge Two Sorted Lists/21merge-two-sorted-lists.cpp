class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        // ListNode*t1=list1;
        // ListNode*t2=list2;
        // ListNode*l3=new ListNode(100);
        // ListNode*t3=l3;
        // while(t1!=NULL && t2!=NULL){
        //     if(t1->val<=t2->val){
        //         ListNode* t=new ListNode(t1->val);
        //         t3->next=t;
        //         t3=t;
        //         t1=t1->next;
        //     }
        //     else{
        //         ListNode* t=new ListNode(t2->val);
        //         t3->next=t;
        //         t3=t;
        //         t2=t2->next;
        //     }
        // }
        // if(t1==NULL) t3->next=t2;
        // else t3->next=t1;
        // return l3->next;
        ListNode* c=new ListNode(100);
        ListNode*temp=c;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                temp->next=a;
                a=a->next;
                temp=temp->next;
            }
            else{
                temp->next=b;
                b=b->next;
                temp=temp->next;
            }
        }
        if(a==NULL) temp->next=b;
        else temp->next=a;
        return c->next;
        

    }
};