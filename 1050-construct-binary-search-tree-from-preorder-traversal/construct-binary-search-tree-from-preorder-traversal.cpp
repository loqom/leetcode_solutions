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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=new TreeNode(preorder[0]);
        for(int i=0;i<preorder.size();i++) {
            TreeNode* temp=new TreeNode(preorder[i]);
            helper(root,temp);
        }
        return root;
    }
};