class Solution {
public:
    int height(TreeNode *root){
        if(root==NULL) return 0;
        int lvl=1+max(height(root->left),height(root->right));
        return lvl;
    }
    void nthLevel(TreeNode * root,int level,int currlevel,vector<int> &res){
        if(root==NULL) return;
        if(currlevel==level) {
            res.push_back(root->val);
            return;
        }
        nthLevel(root->left,level,currlevel+1,res);
        nthLevel(root->right,level,currlevel+1,res);
    }
    void lOrder(TreeNode *root,vector<vector<int>>&ans){
        int n=height(root);
        for(int i=1;i<=n;i++){
            vector<int> res;
            nthLevel(root,i,1,res);
            ans.push_back(res);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root,ans);
        return ans;
    }
};