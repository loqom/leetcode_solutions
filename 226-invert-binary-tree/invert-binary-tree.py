# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
# void helper(TreeNode* root){
#         if(root==NULL) return;
#         TreeNode* t=root->left;
#         root->left=root->right;
#         root->right=t;
#         helper(root->left);
#         helper(root->right);
#     }
#     TreeNode* invertTree(TreeNode* root) {
#         helper(root);
#         return root;
#     }
class Solution:
    def helper(self,root):
        if root is None:
            return
        temp=root.left
        root.left=root.right
        root.right=temp
        self.helper(root.left)
        self.helper(root.right)
    
    def invertTree(self, root: TreeNode | None) -> TreeNode | None:
        self.helper(root)
        return root
        