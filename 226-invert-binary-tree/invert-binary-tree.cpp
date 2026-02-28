class Solution {
public:
    void helper(TreeNode* root){
        if(root==NULL) return;
        TreeNode* t=root->left;
        root->left=root->right;
        root->right=t;
        helper(root->left);
        helper(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};