/* Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:

    void solve(Node* root, pair<bool, pair<int,int>>& p, int k, int node) {
        if (root == NULL) {
            return;
        }

        if (root->data == node) {
            p.first = true;
            return;
        }

        solve(root->left, p, k, node);

        if (p.first) {
            p.second.second++;

            if (p.second.second == k) {
                p.second.first = root->data;
                p.first = false;
            }
            return;
        }

        solve(root->right, p, k, node);

        if (p.first) {
            p.second.second++;

            if (p.second.second == k) {
                p.second.first = root->data;
                p.first = false;
            }
            return;
        }
    }

    int kthAncestor(Node* root, int k, int node) {
        pair<bool, pair<int,int>> p = {false, {-1, 0}};

        solve(root, p, k, node);

        return p.second.first;
    }
};
