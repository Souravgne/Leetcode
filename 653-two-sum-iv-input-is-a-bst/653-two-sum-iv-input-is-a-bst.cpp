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
        vector<int> v;
        void inorder(TreeNode* root){
                if(root == NULL )return ;
                inorder(root->left);
                v.push_back(root->val);
                inorder(root->right);
        }
    bool findTarget(TreeNode* root, int k) {
            if(root== NULL)return root;
            inorder(root );
            int start =0;
            int end= v.size()-1;
            while(start< end){
                    if(v[start] + v[end]== k)return true;
                    if(v[start] + v[end]< k)start++;
                    else{
                            end--;
                    }
            }
            
        return false;
    }
};