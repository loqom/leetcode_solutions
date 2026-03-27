class Solution {
public:
    void depth(TreeNode* root,int mx,int &dep){
        if(root->left==NULL && root->right==NULL){
            if(mx>dep) dep=mx;
            return;
        }
        if(root->left!=NULL) depth(root->left,mx+1,dep);
        if(root->right!=NULL) depth(root->right,mx+1,dep);
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int dep=0;
        depth(root,1,dep);
        return dep;
    }
};