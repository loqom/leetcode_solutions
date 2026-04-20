class Solution {
public:
    vector<TreeNode*> preorderTraversal(TreeNode* root) {   
        if(root==NULL) return {};    
        vector<TreeNode*>res;
        stack<TreeNode *> st;
        st.push(root);
        while(st.size()>0){
            TreeNode* temp=st.top();
            st.pop();
            res.push_back(temp);
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left); 
        }
        return res; 

    }
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        vector<TreeNode*> ans=preorderTraversal(root);
        for(int i=0;i<ans.size()-1;i++){
            ans[i]->right=ans[i+1];
            ans[i]->left=NULL;
        }
    }
};