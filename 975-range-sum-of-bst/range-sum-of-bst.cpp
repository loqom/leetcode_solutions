class Solution {
public:
    int sm;
    void helper(TreeNode* root,int lo,int hi){
        if(root==NULL) return;
        helper(root->left,lo,hi);
        if(root->val >= lo && root->val <=hi) sm+=root->val;
        helper(root->right,lo,hi);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        sm=0;
        helper(root,low,high);
        return sm;
    }
};