class Solution {
public:
    TreeNode* helper(vector<int>& inorder,int inlo,int inhi,vector<int>& postorder,int postlo,int posthi){
        if (inlo > inhi || postlo > posthi) return NULL;
        TreeNode* root=new TreeNode(postorder[posthi]);
        int i=inlo;
        while(i<=inhi){
            if(inorder[i]==postorder[posthi]) break;
            i++;
        }
        int leftcn=i-inlo;
        int rightcn=inhi-i;
        root->right=helper(inorder,i+1,inhi,postorder,posthi-rightcn,posthi-1);
        root->left=helper(inorder,inlo,i-1,postorder,postlo,postlo+leftcn-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        return helper(inorder,0,n-1,postorder,0,n-1);
    }
};