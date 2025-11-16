class Solution {
public:
    // ListNode* getNode(ListNode* head,int idx){
    //     ListNode* temp=head;
    //     for(int i=1;i<idx;i++){
    //         temp=temp->next;
    //     }
    //     return temp;
    // } 
    ListNode* reverseList(ListNode* head) {
        // ListNode* temp=head;
        // int n=0;
        // while(temp){
        //     temp=temp->next;
        //     n++;
        // }
        // int i=1;
        // int j=n;
        // while(i<j){
        //     ListNode* a=getNode(head,i);
        //     ListNode* b=getNode(head,j);
        //     swap(a->val,b->val);
        //     i++;
        //     j--;
        // }
        // return head;


        //optimized

        //iterative

        // ListNode*curr=head;
        // ListNode*prev=NULL;
        // ListNode*Next;
        // while(curr){
        //     Next=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=Next;
        // }
        // return prev;


        //recirive
        if(head==NULL  || head->next==NULL) return head;
        ListNode* s=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return s;
    }
};