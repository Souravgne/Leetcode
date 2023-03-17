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
    
    int minval(TreeNode* root){
        TreeNode* t = root;
        while(t->left!=NULL){
        t = t->left;
        }
        return t->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        
        
        
        if(root->val == key){
            // 0 child
            
            if(root->left == NULL && root->right==NULL){
            delete root ; 
            return NULL;
        }
            
            
            // 1 child 
            
            // left
            if(root->left !=NULL && root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            
            
            // right
            if(root->right !=NULL && root->left == NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp; }
            
            // 2 child
            
            if(root->left != NULL && root->right != NULL){
                int mini = minval(root->right);
                root->val = mini;
                root->right = deleteNode(root->right , mini);
                return root;
                
            }
        }
        else if(root->val < key ){
            root->right = deleteNode(root->right , key);
        }
        else{
                        root->left = deleteNode(root->left , key); 
        }
        
        return root;
    }
};