
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        
        q.push(root);
        while(!q.empty()){
           int size = q.size();
            vector<int> v;
            while(size--){
                TreeNode* frontNode = q.front();
                v.push_back(frontNode->val);
                q.pop();
                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right)q.push(frontNode->right);
            }
            // s.push(v);
            ans.push_back(v);
        }
        
       reverse(ans.begin(), ans.end());
        return ans;
        
    }
};