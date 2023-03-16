

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=  q.size();
            while(size--){
                Node* frontNode = q.front();
                q.pop();
                if(size==0){
                    frontNode->next= NULL;
                }
                else{
                    frontNode->next = q.front();
                }
                if(frontNode->left)q.push(frontNode->left);
                if(frontNode->right)q.push(frontNode->right);
            }
            
            
        }
        return root;
        
    }
};