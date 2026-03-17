class Solution {
public:
    // void traverse(TreeNode* root,vector<int> &res){
    //     if(root==NULL) return;
    //     res.push_back(root->val);
    //     traverse(root->left,res);
    //     traverse(root->right,res);
    // }
    vector<int> preorderTraversal(TreeNode* root) {   
        if(root==NULL) return {};    
        vector<int>res;
        stack<TreeNode *> st;
        st.push(root);
        while(st.size()>0){
            TreeNode* temp=st.top();
            st.pop();
            res.push_back(temp->val);
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left); 
        }
        return res; 

    }
};