class Solution {
public:
    int sm=0;
    void revIn(TreeNode* root){
        if(root==NULL) return;
        revIn(root->right);
        root->val+=sm;
        sm=root->val;
        revIn(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        revIn(root);
        return root;
    }
};