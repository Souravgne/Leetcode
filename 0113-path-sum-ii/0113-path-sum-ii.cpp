class Solution {
public:
    void solve(TreeNode* root, int k, vector<vector<int>>& ans, vector<int>& path) {
        if (!root) return;
        
        if (!root->left && !root->right && root->val == k) {
            path.push_back(root->val);
            ans.push_back(path);
            path.pop_back();
            return;
        }
        
        path.push_back(root->val);
        solve(root->left, k - root->val, ans, path);
        solve(root->right, k - root->val, ans, path);
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int k) {
        vector<int> path;
        vector<vector<int>> ans;
        solve(root, k, ans, path);
        return ans;
    }
};
