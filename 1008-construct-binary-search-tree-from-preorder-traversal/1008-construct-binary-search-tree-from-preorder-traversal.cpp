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
    
    TreeNode* solve(TreeNode* &root , int data){
        
        if(root == NULL){
            root = new TreeNode(data);
            return root;
        }
        
        if(data < root->val){
            root->left = solve(root->left , data);
        }
        else{
            root->right = solve(root->right , data);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i =0 ; 
        TreeNode* root =NULL;
        while(i< preorder.size()){
            root= solve(root , preorder[i++]);
        }
        return root;
        
    }
};