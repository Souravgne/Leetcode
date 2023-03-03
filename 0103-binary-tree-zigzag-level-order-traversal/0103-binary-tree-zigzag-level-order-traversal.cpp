
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;
        queue<TreeNode*> q;
        q.push(root);
        int i =0 ; 
        while(!q.empty()){
            int size = q.size();
            vector<int> v;
            while(size--){
                TreeNode* front = q.front();
                v.push_back(q.front()->val);
                q.pop();
                if(front->left){q.push(front->left);}
                if(front->right){q.push(front->right);}
            }
            
            if(i++%2){
                reverse(v.begin(), v.end());
                
            }
            ans.push_back(v);
        }
        return ans;
    }
};