class Solution {
public:
    int helper(TreeNode* root,int p){
        if(root==NULL) return 0;
        int cn=(root->val>=p) ? 1: 0;
        p=max(p,root->val);
        cn+=helper(root->left,p);
        cn+=helper(root->right,p);
        return cn;
    }
    int goodNodes(TreeNode* root) {
        return helper(root,root->val);
    }
};