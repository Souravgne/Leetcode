
class Solution {
public:
    
    pair<bool , int> helper(TreeNode* root){
        if(root== NULL){
    pair<bool , int> p = make_pair(true , 0);
            return p;
        }

        if(root->left == NULL && root->right == NULL){
            pair<bool , int> p = make_pair(true , root->val);
            return p;
            
        }
       pair<bool,int> left= helper(root->left);
        pair<bool,int> right= helper(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool condition = root->val == root->left->val+root->right->val;
        
        pair<bool, int> ans;
        
        if(leftAns && rightAns && condition){
            ans.first = true;
            ans.second = root->val + left.second + right.second;
        }
        else{
            ans.first = false;
        }
        
        
        return ans;
        
        
        
    }
    bool checkTree(TreeNode* root) {
       return helper(root).first; 
    }
};