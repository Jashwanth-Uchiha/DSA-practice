/* Structrue of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
    private:
    void recur(Node *root ,int & h,int count){
        if(root==NULL){
            h=max(h,count-1);
            return;
        }
        // check left of the node
        recur(root->left ,h,count+1);
      
        
        // check right of the node
        recur(root->right ,h,count+1);
        
      
        
        
    }
    
    
    
  public:
    int height(Node* root) {
       int h=0;
       int count=0;
       recur(root,h,count);
       return h;
        
    }
};