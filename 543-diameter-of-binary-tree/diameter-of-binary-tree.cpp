class Solution {
public:
    int mx=0;
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right)); 
    }
    int diameterOfBinaryTree(TreeNode* root) {
       if(root==NULL) return 0;
        int ans=levels(root->left)+levels(root->right);
        mx=max(mx,ans);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return mx; 
    }
};
