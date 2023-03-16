
class Solution {
public:
    
    TreeNode* solve(vector<int> inorder, vector<int> postorder , int &index , int inorderStart , int inorderEnd,map<int , int>& mp){
        if(index <0  || inorderStart> inorderEnd){
            return NULL;
        }
        
        int value = postorder[index--];
        TreeNode* root = new TreeNode(value);
        int temp = mp[value];
        root->right = solve(inorder , postorder, index , temp+1 , inorderEnd , mp );
         root->left = solve(inorder , postorder, index , inorderStart , temp-1 , mp );
        return root;
        
        
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int , int> mp;
        for(int i =0 ; i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        
      int  postOrderIndex =postorder.size()-1;
      return  solve(inorder , postorder, postOrderIndex , 0 , inorder.size()-1, mp);
        
    }
};