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

        if (root == NULL) {
            return ans;
        }

        map<int, vector<int>> mp;
        queue<pair<Node*, int>> q;

        q.push({root, 0});

        while (!q.empty()) {
            Node* curr = q.front().first;
            int d = q.front().second;
            q.pop();

            while (curr != NULL) {
                mp[d].push_back(curr->data);

                if (curr->left) {
                    q.push({curr->left, d + 1});
                }

                curr = curr->right;
            }
        }

        for (auto it : mp) {
            for (auto val : it.second) {
                ans.push_back(val);
            }
        }

        return ans;
    }
};
