
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root)return "";
        string s="";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr==NULL)s.append("#,");
            else s.append(to_string(curr->val)+',');
            if(curr!=NULL){
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
        if(data.size()== 0)return NULL;
        stringstream s(data);
        string str;
       getline(s,str,',' );
        TreeNode* root= new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* frontNode = q.front();
            q.pop();
            getline(s,str,',');
            if(str=="#"){
                frontNode->left = NULL;
            }
            else{
                TreeNode* leftNode= new TreeNode(stoi(str));
                frontNode->left= leftNode;
                q.push(leftNode);
            }
            
            getline(s,str,',');
            if(str=="#"){
                frontNode->right = NULL;
            }
            else{
                TreeNode* rightNode= new TreeNode(stoi(str));
                frontNode->right= rightNode;
                q.push(rightNode);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;