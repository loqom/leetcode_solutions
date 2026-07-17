class Solution {
public:
    TreeNode* find(TreeNode* root,int start){
        if(root==NULL) return NULL;
        if(root->val==start) return root;
        TreeNode* left = find(root->left, start);
        if (left) return left;
        return find(root->right,start);
    }
    void PushToMap(unordered_map<TreeNode*,TreeNode*> &mp,TreeNode* root){
        if(root==NULL) return;
        if(root->left) mp[root->left]=root;
        if(root->right) mp[root->right]=root;
        PushToMap(mp,root->left);
        PushToMap(mp,root->right);
    }
    int amountOfTime(TreeNode* root, int start) {
        TreeNode* st=find(root,start);
        unordered_map<TreeNode*,TreeNode*> mp;
        PushToMap(mp,root);
        unordered_set<TreeNode*> s;
        s.insert(st);
        queue<pair<TreeNode*,int>> q;
        q.push({st,0});
        int mx=0;
        while(q.size()>0){
            pair<TreeNode*,int> p=q.front();
            q.pop();
            int lvl=p.second;
            mx=max(mx,lvl);
            TreeNode* temp=p.first;
            if(temp->left){
                if(s.find(temp->left)==s.end()){
                    q.push({temp->left,lvl+1});
                    s.insert(temp->left);
                }
            }
            if(temp->right){
                if(s.find(temp->right)==s.end()){
                    q.push({temp->right,lvl+1});
                    s.insert(temp->right);
                }
            }
            if(mp.count(temp) && s.find(mp[temp])==s.end()){
                q.push({mp[temp],lvl+1});
                s.insert(mp[temp]);
            }
        }
        return mx;
    }
};