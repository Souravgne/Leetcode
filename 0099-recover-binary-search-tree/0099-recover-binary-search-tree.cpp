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
    TreeNode* first , *second , * prev;
    
    
    void inorder(TreeNode* root){
        if(root==NULL)return ;
        inorder(root->left);
        if(prev->val > root->val){
            if(first->val ==0){
                first = prev;
            }
            
     if(first->val!=0)  {
            second = root;
        }
        }
        prev = root;
        inorder(root->right);
    }
    
    void recoverTree(TreeNode* root) {
        prev = new TreeNode(INT_MIN);
         first = new TreeNode(0);
         second = new TreeNode(0);
        inorder(root);
        swap(first->val , second ->val);
        
    }
};