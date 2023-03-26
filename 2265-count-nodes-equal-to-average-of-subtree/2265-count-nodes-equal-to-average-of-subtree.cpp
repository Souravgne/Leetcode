/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count=0;
   pair<int, int> sum(TreeNode* root) {
        if (root == NULL) {
            return make_pair(0, 0);
        }

        pair<int, int> left_sum = sum(root->left);
        pair<int, int> right_sum = sum(root->right);

        int sum = left_sum.first + right_sum.first + root->val;
        int count = left_sum.second + right_sum.second + 1;

        return make_pair(sum, count);
    }
    int averageOfSubtree(TreeNode* root) {
        
        if(root==NULL)return 0;
       
      
        pair<int, int> subtree_sum = sum(root);
        int subtree_avg = subtree_sum.first / subtree_sum.second;

        if (subtree_avg == root->val) {
            count++;
        }
         averageOfSubtree(root->left);
         averageOfSubtree(root->right);
        
        return count;
    }
};