class Solution {
public:
    // int height(TreeNode *root){
    //     if(root==NULL) return 0;
    //     int lvl=1+max(height(root->left),height(root->right));
    //     return lvl;
    // }
    // void nthLevel(TreeNode * root,int level,int currlevel,vector<int> &res){
    //     if(root==NULL) return;
    //     if(currlevel==level) {
    //         res.push_back(root->val);
    //         return;
    //     }
    //     nthLevel(root->left,level,currlevel+1,res);
    //     nthLevel(root->right,level,currlevel+1,res);
    // }
    void lOrder(TreeNode *root,vector<vector<int>>&ans){
        if(root==NULL) return ;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0){  
            int lvl=q.size();
            vector<int> arr;
            for(int i=0;i<lvl;i++){
                TreeNode* t=q.front();
                q.pop();
                arr.push_back(t->val);
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
            }
            ans.push_back(arr);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root,ans);
        return ans;
    }
};