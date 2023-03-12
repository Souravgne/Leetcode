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
    
    int solve(TreeNode* root, int &min_depth , int count){
        if(root==NULL){
            return count-1;
        }
        if(root->left ==NULL && root->right== NULL){
           if(count<min_depth){
                min_depth = count;
           }
        }
        int leftAns=solve(root->left , min_depth , count+1);
        int rightAns= solve(root->right, min_depth , count+1);
        
        return min(leftAns, rightAns);
    
    
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int min_depth = INT_MAX;
        solve(root, min_depth , 1);
        
        return min_depth;
    }
};