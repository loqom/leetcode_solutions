class Solution {
public:
    int helper(TreeNode* root){
        TreeNode* temp=root;
        temp=temp->left;
        while(temp->right!=NULL) temp=temp->right;
        return temp->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
            if(root->left==NULL && root->right==NULL) return NULL;
            if(root->left==NULL || root->right==NULL){
                if(root->left!=NULL) return root->left;
                else return root->right;
            }
            else{
                int cval=helper(root);
                root->val=cval;
                root->left=deleteNode(root->left,cval);
            }
        }
        else if(root->val>key) root->left=deleteNode(root->left,key);
        else root->right=deleteNode(root->right,key);
        return root;
    }
};