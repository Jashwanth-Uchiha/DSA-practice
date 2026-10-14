/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
private:
 void count_(Node*root,int &count){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        count++;
    }
    
    count_(root->left,count);
    
    count_(root->right,count);
}





  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        int count=0;
       count_(root,count);
       return count;
        
    }
};