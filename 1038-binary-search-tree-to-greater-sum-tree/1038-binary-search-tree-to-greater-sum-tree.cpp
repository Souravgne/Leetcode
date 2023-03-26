class Solution {
public:
    int sum = 0;
    void reverseInorder(TreeNode* root) {
        if (!root) return;
        reverseInorder(root->right);
        root->val += sum;
        sum = root->val;
        reverseInorder(root->left);
    }
    // void inorder(TreeNode* root, vector<int>& ans) {
    //     if (!root) return;
    //     inorder(root->left, ans);
    //     ans.push_back(root->val);
    //     inorder(root->right, ans);
    // }
    TreeNode* bstToGst(TreeNode* root) {
        if (!root) return NULL;
        vector<int> ans;
        // inorder(root, ans);
        reverseInorder(root);
        return root;
    }
};
