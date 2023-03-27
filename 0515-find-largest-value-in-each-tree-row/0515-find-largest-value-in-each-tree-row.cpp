
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size= q.size();
            int max = INT_MIN;
            while(size--){
                TreeNode* frontNode = q.front();
                q.pop();
                if(frontNode->val > max){
                    max= frontNode->val;
                }
                
                if(frontNode->left){q.push(frontNode->left);}
                if(frontNode->right){q.push(frontNode->right);}
                
            }
            ans.push_back(max);
        }
        
        return ans;
        
    }
};