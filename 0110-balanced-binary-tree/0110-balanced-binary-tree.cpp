
class Solution {
public:
    
    int height(TreeNode* root){
        
        if(root==NULL)return 0;
        
        int left = height(root->left);
        int right = height(root->right);
            return max(left, right)+1;
        
        
        
    }
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL) return true;
        
        bool l= isBalanced(root->left);
        bool r= isBalanced(root->right);
        int left = height(root->left);
        int right = height(root->right);
        
        if(l&& r&& abs(left-right)<=1)
        return true;
        else return false;
        
    }
};