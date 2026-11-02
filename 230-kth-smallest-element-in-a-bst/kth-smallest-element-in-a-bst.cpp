class Solution {
public:
    int j=0;
    int mn;
    void helper(TreeNode* root,int &k){
        if(!root) return;
        helper(root->left,k);
        if(k>0) {
            mn=root->val;
            k--;
        }
        helper(root->right,k);
    }   
    int kthSmallest(TreeNode* root, int k) {
        helper(root,k);
        return mn;
    }
};