
class Solution {
public:
    
    void solve(TreeNode* root , int& sum ){
        
        if(root==NULL)return  ; 
       if(root->left && root->left->left ==NULL&& root->left->right==NULL) sum+=root->left->val;
        solve(root->left , sum );
        solve(root->right, sum);
        
       
} 
    int sumOfLeftLeaves(TreeNode* root) {
            int sum=0;
        solve(root, sum );
        return sum ; 
        
    }
};