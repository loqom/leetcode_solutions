class Solution {
public:
    bool hasDuplicates(vector<int>& nums) {
        for (size_t i = 0; i < nums.size(); ++i) {
            for (size_t j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
    void helper(TreeNode* root,vector<int> &ans){
        if(root==NULL) return;
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        if(is_sorted(ans.begin(), ans.end())) return hasDuplicates(ans) ? false : true; 
        return false;
    }
};