
class Solution {
public:
    
    void solve(TreeNode* root, int val , TreeNode* &ans){
        if(root== NULL)return;
 
        if(root->val == val) ans = root;
        if(val < root->val){
            solve(root->left, val , ans);
        }
        else if(val>root->val){
             solve(root->right, val , ans);
        }
        
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)return NULL;
       
           TreeNode* ans = NULL;
        solve(root, val , ans);
        return ans;
        
        
    }
};