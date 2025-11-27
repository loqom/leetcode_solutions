class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp=head->next;
        int idx=1;
        int f=-1;
        int l=-1;
        int p=-1;
        ListNode* a=head;
        ListNode* b=head->next;
        ListNode* c=head->next->next;
        if(c==NULL) return {-1,-1};
        while(c){
            if((b->val>c->val && b->val>a->val) || (b->val<c->val && b->val<a->val)){
                if(f==-1) f=idx;
                else l=idx;
            }
            a=a->next;
            b=b->next;
            c=c->next;
            idx++;
        }
        if(l==-1) return {-1,-1};
        int mx=l-f;
        idx=1;
        f=-1;
        l=-1;
        p=-1;
        int diff=INT_MAX;
        a=head;
        b=head->next;
        c=head->next->next;
        while(c){
            if((b->val>c->val && b->val>a->val) || (b->val<c->val && b->val<a->val)){
                f=l;
                l=idx;
                if(f!=-1){
                    diff=min(diff,l-f);
                }
            }
            a=a->next;
            b=b->next;
            c=c->next;
            idx++;
        }
        return {diff,mx};
    }
};