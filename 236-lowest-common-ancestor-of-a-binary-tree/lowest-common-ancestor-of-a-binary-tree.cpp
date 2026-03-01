class Solution {
public:
    bool exists(TreeNode* root,TreeNode* p){
        if(root==NULL) return false;
        if(root==p) return true;
        return (exists(root->left,p) || exists(root->right,p));
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q) return root;
        else if(exists(root->left,p) && exists(root->right,q)) return root;
        else if(exists(root->right,p) && exists(root->left,q)) return root;
        else if(exists(root->left,p) && exists(root->left,q)) return lowestCommonAncestor(root->left,p,q);
        else return lowestCommonAncestor(root->right,p,q);
    }
};