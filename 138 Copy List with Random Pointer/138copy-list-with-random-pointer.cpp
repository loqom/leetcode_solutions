/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        Node* f=new Node(12);
        Node* t=f;
        while(temp){
            Node* gr=new Node(temp->val);
            Node* jh=gr;
            t->next=jh;
            t=t->next;
            temp=temp->next;
        }
        Node* pt=f->next;
        Node* a=head;
        Node* b=pt;
        t=new Node(91);
        Node* po=t;
        while(a){
            
            po->next=a;
            a=a->next;
            po=po->next;
            po->next=b;
            b=b->next;
            po=po->next; 
        }
        t=t->next;
        Node* t1=t;
        while(t1){
            Node* t2=t1->next;
            if(t1->random) t2->random=t1->random->next;
            t1=t1->next->next;
        }
        Node *y1=new Node(12);
        Node* y2=new Node(31);
        Node* r1=y1;
        Node* r2=y2;
        Node* r=t;
        while(r){
            r1->next=r;
            r=r->next;
            r1=r1->next;
            r2->next=r;
            r=r->next;
            r2=r2->next;
        }
        r1->next=NULL;
        r2->next=NULL;
        r1=r1->next;
        r2=r2->next;
        return f->next;
    }
};