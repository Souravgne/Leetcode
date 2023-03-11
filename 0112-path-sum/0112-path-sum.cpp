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
    void solve(TreeNode* root , bool &ans ,int sum, int k ){
    if(!root)return;
        sum+= root->val;
        if(!root->left && !root->right){
            if(sum==k) ans=true;
            return;
        }
        solve(root->left, ans, sum , k );
        solve(root->right, ans , sum , k );
        
        
    }
    bool hasPathSum(TreeNode* root, int k) {
       int sum=0;
        bool ans = false;
        solve(root, ans ,0, k);
        return ans;
        
    }
};