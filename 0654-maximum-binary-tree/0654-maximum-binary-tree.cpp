class Solution {
public:
    pair<int, int> findmax(vector<int>& nums, int s, int e) {
        int max_val = nums[s];
        int max_idx = s;
        for (int i = s + 1; i <= e; i++) {
            if (nums[i] > max_val) {
                max_val = nums[i];
                max_idx = i;
            }
        }
        return make_pair(max_val, max_idx);
    }
    
    TreeNode* solve(vector<int>& nums, int s, int e) {
        if (s > e) {
            return nullptr;
        }
        pair<int, int> maxi = findmax(nums, s, e);
        int a = maxi.first;
        int idx = maxi.second;
        TreeNode* root = new TreeNode(a);
        root->left = solve(nums, s, idx - 1);
        root->right = solve(nums, idx + 1, e);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }
};
