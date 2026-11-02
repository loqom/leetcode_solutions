class Solution:
    def rightSideView(self, root: TreeNode | None) -> list[int]:
        ans=[]
        q=deque([root])
        while q:
            r=None
            n=len(q)
            for i in range(n):
                t=q.popleft()
                if t:
                    r=t
                    q.append(t.left)
                    q.append(t.right)
            if r:
                ans.append(r.val)
        return ans
        