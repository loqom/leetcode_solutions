class Solution {
public:
    void helper(TreeNode* root,vector<int> &ans){
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0){
            int n=q.size();
            TreeNode* r=nullptr;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                if(t!=NULL){
                    r=t;
                    if(t->left) q.push(t->left);
                    if(t->right) q.push(t->right);
                }
            }
            if(r!=NULL) ans.push_back(r->val);
        }
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};