class Solution {
public:
    int levels(TreeNode *root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void nthLevel(TreeNode *root,int curr,int level,vector<int> &ans){
        if(root==NULL) return;
        if(curr==level) {
            ans[curr]=root->val;
            return;
        }
        nthLevel(root->left,curr+1,level,ans);
        nthLevel(root->right,curr+1,level,ans);
    }
    void levelTraverse(TreeNode * root,vector<int> &ans){
        int n=levels(root);
        for(int i=0;i<n;i++){
            nthLevel(root,0,i,ans);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root),0);
        levelTraverse(root,ans);
        return ans;
    }
};