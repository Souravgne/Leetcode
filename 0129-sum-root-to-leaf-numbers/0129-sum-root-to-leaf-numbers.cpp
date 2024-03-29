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
    
    void solve(TreeNode* root , int &sum ,int &num ){
        if(root==NULL)return ;
        num = 10*num+root->val;
        if(root->left == NULL&& root->right==NULL){
            sum+=num;
        }
        solve(root->left , sum , num);
        solve(root->right , sum , num );
        num/=10;
    }
    int sumNumbers(TreeNode* root) {
        int sum =0, num =0;
        solve(root, sum ,num);
        return sum;
    }
};