/* Structure of Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
  
  void solve(Node* root,int k,int &count,vector<int>& path){
      
      if(root==NULL){
          return ;
      }
       path.push_back(root->data);
       // go to the left
       solve(root->left,k,count,path);
       
       // go to the right
       solve(root->right,k,count,path);
       
       
       int sum=0;
       for(int i=path.size()-1;i>=0;i--){
           sum=sum+path[i];
           if(sum==k){
               count++;
           }
       }
       
      path.pop_back();
  
      
  }
  
  
    int countAllPaths(Node *root, int k) {
        // code here
        if(root==NULL){
            return 0;
        }
        vector<int> path;
        int count=0;
        solve(root,k,count,path);
         return count;
    }
};