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
    
    bool issame (TreeNode* root1 , TreeNode* root2){
        if(root1==NULL && root2==NULL)return true;
        if(root1==NULL && root2!=NULL)return false;
        if(root1!=NULL && root2==NULL)return false;
        if(root1->val != root2->val)return false;
        bool left = issame(root1->left , root2->left);
        bool right= issame(root1->right , root2->right);
        
        return left&& right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(root==NULL)return false;
        
        bool ans=  ans = issame(root, subRoot);
        if(ans)return true;
       bool left= isSubtree(root->left ,subRoot);
       bool right =isSubtree(root->right,subRoot);
       
        
        return left||right;
    }
};