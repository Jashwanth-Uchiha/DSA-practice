/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
    
    private:
    
    void solve(Node*root,int sum,int h,pair<int ,int>&p){
        
        if(root==NULL){
            if(h>p.second){
                p.first=sum;
                p.second=h;
            }
            else if(h==p.second){
                p.first=max(p.first,sum);
            }
            return ;
        }
        
        // go to the left side
        solve(root->left,sum+root->data,h+1,p);
        // go to the right
           solve(root->right,sum+root->data,h+1,p);
    }
    
    
    
    
  public:
    int sumOfLongRootToLeafPath(Node *root) {
       if(root==NULL){
           return 0;
       }
       int ans=root->data;
       pair<int,int>p={ans,0};
      solve(root,0,0,p);
        return p.first;
    }
};