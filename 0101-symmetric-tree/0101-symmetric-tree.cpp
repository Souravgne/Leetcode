
class Solution {
public:
        bool check(TreeNode* root1 , TreeNode* root2){
               if(root1== NULL && root2==NULL)return true;
                if(root1== NULL && root2 != NULL)return false;
                if(root1!=NULL&& root2== NULL)return false;
                if(root1->val!=  root2->val)return false;
                
                bool op1 = check(root1->left ,root2->right);
                bool op2 = check(root1->right , root2->left);
                return op1&& op2;
        }
    bool isSymmetric(TreeNode* root) {
   
                    return check(root->left , root->right);

    }
};