
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         vector<vector<int>> ans;
        map<int, map<int , multiset<int> > >node;
        queue<pair<TreeNode* , pair<int ,int> > > q;
        q.push(make_pair(root, make_pair(0,0)));
        
        while(!q.empty()){
            pair<TreeNode* , pair<int, int>> temp=q.front();
            q.pop();
            TreeNode* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl= temp.second.second;
            
            node[hd][lvl].insert(frontNode->val);
            if(frontNode->left){  q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));}
            if(frontNode->right){q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));}
            
           
            

        }
        
         for(auto i:node){ 
             vector<int> v;
                for(auto j:i.second){ 
                    
                    for(auto k: j.second){
                    v.push_back(k);
                    }
                    
                }
                ans.push_back(v);
            }
        return ans;
    }
};