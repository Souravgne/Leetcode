
class Solution {
public:
    
    int ans =0;
    int level(TreeNode* root){
        if(root==NULL)return 0;
        int left = level(root->left);
        int right = level(root->right);
        return max(left,right)+1;
    }
    
    void solve(TreeNode* root , int& lvl){
        if(root==NULL)return;
         queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size= q.size();
           
            while(size--){
                TreeNode* frontNode = q.front();
                q.pop();
                if(frontNode->left ==NULL && frontNode->right ==NULL && lvl==1){
                    ans = frontNode->val;
                    lvl= INT_MAX;
                }
            
                
                if(frontNode->left){q.push(frontNode->left);}
                if(frontNode->right){q.push(frontNode->right);}
               

            }
            lvl--;
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        int lvl =level(root); 
       solve(root,lvl);
        
        return ans;
    }
};