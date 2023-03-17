class Solution {
public:
    bool isbst(TreeNode* root, long minVal, long maxVal) {
        if (root == nullptr) return true;

        if (root->val > minVal && root->val < maxVal) {
            bool left = isbst(root->left, minVal, root->val);
            bool right = isbst(root->right, root->val, maxVal);
            return left && right;
        }

        return false;
    }

    bool isValidBST(TreeNode* root) {
        return isbst(root, LONG_MIN, LONG_MAX);
    }
};
