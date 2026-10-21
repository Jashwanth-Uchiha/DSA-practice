/* Definition for Node
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
    private:
    pair<bool,int> solve (Node* root){
        // okavela root null aithe zero sum kada
        if(root==NULL){
            return {true,0};
        }
        
        //left di aithe?
       pair<bool,int> left=solve(root->left);
       
       // right aithe?
       pair<bool,int> right=solve(root->right);
       
       // check bro
       
       bool ans= root->data==left.second+right.second|| root->left==NULL && root->right==NULL;;
        
        //condition of sum dude. o_o
        if(ans && left.first && right.first ){
            return {true,left.second+right.second+root->data};
        }
        
        else{
            return {false,0};
        }
        
    }
  public:
    bool isSumTree(Node* node) {
        
       pair<bool,int> ans=solve(node);
       return ans.first;
    }
};