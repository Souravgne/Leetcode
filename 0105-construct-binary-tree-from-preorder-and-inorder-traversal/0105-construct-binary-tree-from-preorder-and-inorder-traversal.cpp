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
    
    
    int position(vector<int>& inorder,int element){
        
        for(int i =0 ; i<inorder.size();i++){
            if(inorder[i]==element){
                return i;
            }
            
           
        }\
             return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &index , int inorderStart, int inorderEnd){
        
        if(index>=preorder.size() || inorderStart>inorderEnd){
            return NULL;
        }
        int element = preorder[index++];
        TreeNode* root = new TreeNode(element);
        
        int pos= position(inorder, element);
        
        root->left = solve(preorder, inorder, index, inorderStart , pos-1);
        root->right= solve(preorder, inorder, index , pos+1 , inorderEnd);
        
        return root;
        
        
        
        
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index =0;
        TreeNode* ans = solve(preorder, inorder , index,0,inorder.size());
        return ans;
    }
};