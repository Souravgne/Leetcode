class Solution {
public:
     void solve(TreeNode* root,vector<int> path , long long int &ans , int k ){

    if(root==NULL)return;
        path.push_back(root->val);
        solve(root->left, path , ans , k );
        solve(root->right, path , ans , k);
        int size= path.size();
        long long int sum=0 ; 
        
        for(int i = size-1; i>=0 ;i--){
            sum+= path[i];
            if(sum==k) ans++;
        }
        
    path.pop_back();
    
    }
    int pathSum(TreeNode* root, int k) {
         vector<int> path;
        long long int ans = 0;
        solve(root, path, ans , k);
        return ans;
    }
};
