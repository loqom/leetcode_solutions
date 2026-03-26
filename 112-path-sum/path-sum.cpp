class Solution {
public:
    void pathSum(TreeNode* root,int sum,bool &y){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) {
            if(root->val==sum) y=true;
            return;
        }
        if(root->left!=NULL) pathSum(root->left,sum-root->val,y);
        if(root->right!=NULL) pathSum(root->right,sum-root->val,y);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool y=false;
        pathSum(root,targetSum,y);
        return y;
    }
};