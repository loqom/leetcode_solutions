class Solution {
public:
    void helper(TreeNode* root,int val,TreeNode* &temp){
        if(root==NULL) return;
        if(root->val==val){
            temp=root;
            return;
        }
        if(root->val > val) helper(root->left,val,temp);
        else helper(root->right,val,temp);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp=NULL;
        helper(root,val,temp);
        return temp;
    }
};