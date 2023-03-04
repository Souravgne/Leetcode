class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int,multiset<int> > > nodes;
        queue<pair<TreeNode* , pair<int, int> > > q;
        vector<vector<int>> ans;
        
        q.push(make_pair(root, make_pair(0,0)));
        
        while(!q.empty()){
            pair<TreeNode* , pair<int, int> >  temp =q.front();
            q.pop();
            TreeNode* frontNode = temp.first;
            int hd= temp.second.first;
            int lvl= temp.second.second;
            
            nodes[hd][lvl].insert(frontNode->val);
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left , make_pair(hd-1 , lvl+1)));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right , make_pair(hd+1 , lvl+1)));
            }
        }
        
        for(auto i: nodes){
            vector<int> level;
            for(auto j: i.second){
                for(auto k: j.second){
                    level.push_back(k);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};
