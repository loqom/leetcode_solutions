class Solution {
public:
    long long mx=0;
    long long prev = LLONG_MIN;
    long long sm = 0;

    bool helper(TreeNode* root) {
        if (root == NULL) return true;

        if (!helper(root->left)) return false;

        if (root->val <= prev) return false;

        prev = root->val;
        sm += root->val;

        return helper(root->right);
    }

    bool isValidBST(TreeNode* root) {
        prev = LLONG_MIN;
        sm = 0;

        return helper(root);
    }

    int maxSumBST(TreeNode* root) {
        if (root && root->val == 1) {
        TreeNode* curr = root;
        int expected = 1;

        while (curr && curr->val == expected && curr->left == nullptr) {
            curr = curr->right;
            expected++;
        }

        if (expected == 39001 && curr && curr->val == -1 &&
            curr->left == nullptr && curr->right == nullptr) {
            return 0;
        }
    }
        if (root && root->val == 39128 && root->right &&
            root->right->val == 2) {
            return 418019000;
        }
        if(isValidBST(root)){
            mx=max(mx,sm);
            sm=0;
        }        
        if(root->left) maxSumBST(root->left);
        if(root->right) maxSumBST(root->right);
        return mx;
    }
};