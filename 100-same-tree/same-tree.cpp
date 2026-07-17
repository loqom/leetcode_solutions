class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if((p==NULL && q!=NULL)||(p!=NULL && q==NULL)) return false;

        if(p->val!=q->val) return false;
        bool h= isSameTree(p->left,q->left);
        if(h==false) return false;
        bool i= isSameTree(p->right,q->right);
        if(i==false) return false;
        return true;
    }
};