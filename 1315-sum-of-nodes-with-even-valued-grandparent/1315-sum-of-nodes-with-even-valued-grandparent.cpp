class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int sum = 0;
        if (root->val % 2 == 0) {
            if (root->left != nullptr) {
                if (root->left->left != nullptr) {
                    sum += root->left->left->val;
                }
                if (root->left->right != nullptr) {
                    sum += root->left->right->val;
                }
            }
            if (root->right != nullptr) {
                if (root->right->left != nullptr) {
                    sum += root->right->left->val;
                }
                if (root->right->right != nullptr) {
                    sum += root->right->right->val;
                }
            }
        }
        
        sum += sumEvenGrandparent(root->left);
        sum += sumEvenGrandparent(root->right);
        
        return sum;
    }
};
