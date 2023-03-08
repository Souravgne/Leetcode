
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            while(size--){
                 TreeNode* frontNode = q.front();
                   q.pop();
                temp.push_back(frontNode->val);
                if(frontNode->left){q.push(frontNode->left);}
                if(frontNode->right){q.push(frontNode->right);}
            }
            ans.push_back(temp);
        }
        return ans;
    }
};


