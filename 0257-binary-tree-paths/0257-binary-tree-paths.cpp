
class Solution {
public:
    void solve(TreeNode* root , string s ,vector<string> &ans ){
        
        if(root==NULL)return ;
       
       s+= to_string(root->val);
        solve(root->left, s+"->", ans);
        solve(root->right, s+"->" , ans);
          if(root->left== NULL && root->right ==NULL){
            ans.push_back(s);
        
        }
        s.erase(s.size()-1);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        string s="";
         vector<string> ans;
        solve(root, s , ans);
        return ans;
        
    }
};