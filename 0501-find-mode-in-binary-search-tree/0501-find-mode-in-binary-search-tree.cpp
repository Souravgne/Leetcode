/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void inorder(TreeNode* root , vector<int> &in){
        if(root==NULL)return ;
        inorder(root->left , in);
        in.push_back(root->val);
        inorder(root->right , in);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> in;
        inorder(root, in);
        
        map<int, int> mp;
        int mx= INT_MIN;
        for(int i =0 ; i< in.size();i++){
            mp[in[i]]++;
            if(mp[in[i]]>mx){
                mx= max(mp[in[i]],mx);
            }
        }
        
        vector<int> ans;
        for(auto it:mp){
            if(it.second==mx)ans.push_back(it.first);
            
        }
        return ans;
        
    }
};