class Solution {
public:
    int n,m;
    void helper(TreeNode* root){
        if(root==NULL) return;
        helper(root->left);
        if(m>0){
            n=root->val;
            m--;
        }
        helper(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        n=INT_MAX;
        m=k;
        helper(root);
        return n;
    }
};