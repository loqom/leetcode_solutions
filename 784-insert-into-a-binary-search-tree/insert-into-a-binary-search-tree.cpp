class Solution {
public:
    void helper(TreeNode* root,TreeNode* a){
        if(root==NULL) return;
        if(root->left==NULL && a->val<root->val ){
            root->left=a;
            return;
        }
        else if(root->right==NULL && a->val>root->val) {
            root->right=a;
            return;
        }
        if(a->val<root->val) helper(root->left,a);
        else helper(root->right,a);

    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* a=new TreeNode(val);
        if(root==NULL) return a;
        TreeNode* b=root;
        helper(root,a);
        return b;
    }
};