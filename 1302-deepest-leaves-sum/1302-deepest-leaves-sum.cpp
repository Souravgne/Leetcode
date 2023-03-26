
class Solution {
public:
    
    
    int solve(TreeNode* root, int max , int & sum){
        
        if(root==NULL)return 0;
       if(max==1){
           sum+= root->val;
           
       }
        max--;
       int left= solve(root->left , max, sum);
      int right=  solve(root->right, max, sum);
        
        return left+right;
        
    }
    int depth(TreeNode* root){
        if(root== NULL)return 0;
        int left = depth(root->left);
        int right = depth(root->right);
        return max(left , right)+1;
    }
    int deepestLeavesSum(TreeNode* root) {
        
        int max = depth(root);
        // return max;
        int sum =0 ; 
         solve(root, max, sum);
        return sum;
        
        
    }
};