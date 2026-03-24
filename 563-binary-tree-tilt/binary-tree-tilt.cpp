class Solution {
public:
    int helper(TreeNode* root,int &sum){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->val;
        int left=helper(root->left,sum);
        int right=helper(root->right,sum);
        sum=sum+abs(left-right);
        return left+right+root->val;
    }
    int findTilt(TreeNode* root) {
        int sum=0;
        helper(root,sum);
        return sum;
    }
};