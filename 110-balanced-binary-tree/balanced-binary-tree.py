class Solution:
    def depth(self,root):
        if root is None:
            return 0
        return 1+max(self.depth(root.left),self.depth(root.right))
    def helper(self,root):
        if root is None:
            return True
        ld=self.depth(root.left)
        rd=self.depth(root.right) 
        if abs(ld-rd)>1:
            return False
        return self.helper(root.left) & self.helper(root.right)

    def isBalanced(self, root: TreeNode | None) -> bool:
        return self.helper(root)