
class Solution {
public:
        int height(TreeNode*root){
                if(root== NULL)return 0;
                int lheight = height(root->left);
                int rheight =  height(root->right);
            if (lheight == -1 || rheight == -1 || abs(lheight - rheight) > 1)  return -1;
                return max(lheight , rheight)+1;
        }
    bool isBalanced(TreeNode* root) {
        if(root== NULL) return true;
          if(height(root)== -1)return false;
            
            int left = height(root->left);
            int right = height(root->right);
          bool  lbal = isBalanced(root->left);
           bool  rbal = isBalanced(root->right);
            return left-right<=1 && lbal && rbal;
    }
};