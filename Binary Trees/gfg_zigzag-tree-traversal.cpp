/* Structure of Binary Tree Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
    vector<int> output;
    
    queue<Node*> q;
    q.push(root);
    bool revert=true;
    while(!q.empty()){
        
        int size=q.size();
       
        vector<int>ans(size);
        /*  size define cheyyakapothe vector empty so 
        ans[0] invalid avthadi empty kabatti
        empty kabatti. */
        
       for(int i=0;i<size;i++){
           
            Node* first=q.front();
            
            q.pop();
            
            int index=revert ? i:size-i-1;
           
            ans[index]=first->data;
           
           
           if(first->left){
               q.push(first->left);
           }
           
           
           if(first->right){
               q.push(first->right);
           }
           
       }
       
        
        revert=!revert;
        
        
        for(int x:ans){
            output.push_back(x);
        }
        
    }
        return output;
        
    
  
    }
};