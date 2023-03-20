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
     TreeNode* first , *second, *prev;
    void solve(TreeNode* root){
        if(root==NULL )return ;
          
        
        solve(root->left);
        
        if(prev ->val > root->val){
            
            if(first->val ==0){
                first = prev;
            }
            if(first!=0){
               second = root; 
            }
            
            // prev->val = root->val;
            
        }
        prev = root;
        solve(root->right );
        
    }
    void recoverTree(TreeNode* root) {
    
        first =new TreeNode(0);
       second = new TreeNode(0);
         prev = new TreeNode(INT_MIN);
        
      solve(root);
        
        swap(first->val , second->val);
        
    }
};