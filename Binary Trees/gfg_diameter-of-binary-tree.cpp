/* Structure of binary tree Node 
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
    int height(Node* root, int &dia) {
        if (root == NULL) return 0;
        int lh = height(root->left, dia);
        int rh = height(root->right, dia);
        dia=max(dia,lh + rh);     
        return 1 + max(lh, rh);       
    }
  public:
    int diameter(Node* root) {
        int dia = 0;
        height(root, dia);
        return dia;
    }
};