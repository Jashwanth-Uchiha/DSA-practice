/* Structure of binary tree node
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
  public:
    vector<int> diagonal(Node *root) {
      vector<int> ans;
      if(root==NULL){
          return ans;
      }
      
     queue<Node*>q;
     q.push(root);
      while(!q.empty()){
          
          Node*curr=q.front();
          q.pop();
          while(curr!=NULL){
              ans.push_back(curr->data);
              if(curr->left){
                  q.push(curr->left);
              }
              curr=curr->right;
          }
          
      }
      
      
      
      
     
      return ans;
        
    }
};