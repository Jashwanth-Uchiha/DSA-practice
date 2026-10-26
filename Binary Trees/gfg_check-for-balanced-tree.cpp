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
    private:
    pair<bool,int> check(Node* root ){
        
        if(root==NULL){
            pair<bool,int> p={true,0};
            return p;
        }
        pair<bool,int> left=check(root->left);
        pair<bool,int> right=check(root->right);
        bool l_a=left.first;
        bool r_a=right.first;
        bool diff =abs(left.second-right.second)<=1;
        pair<bool,int> ans;
        ans.second=max(left.second,right.second)+1;
        if(l_a && r_a && diff){
          ans.first= true;
        }
        else{
            ans.first= false;
        }
        return ans;
    }
  public:
    bool isBalanced(Node* root) {
        return check(root).first;
    }
};