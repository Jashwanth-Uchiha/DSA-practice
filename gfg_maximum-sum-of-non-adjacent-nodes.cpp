/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  
  pair<int,int> solve(Node* root){
      
      if(root==NULL){
          return {0,0};
      }
      pair<int,int> leftans=solve(root->left);
      pair<int,int> rightans=solve(root->right);
      
     int k=root->data+leftans.second+rightans.second;
      int m= max(leftans.first,leftans.second)+max(rightans.first,rightans.second);
      
     return {k,m};
     
      
  }
  
  
  
  
    int getMaxSum(Node *root) {
        // code here
        pair<int,int>ans=solve(root);
        return max(ans.first,ans.second);
        
    }
};