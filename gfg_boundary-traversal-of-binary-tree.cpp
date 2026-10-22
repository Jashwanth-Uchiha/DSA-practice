class Solution {
 private:
     void leftside(Node* root, vector<int>& ans) {
         if (root == NULL || (root->left == NULL && root->right == NULL))
             return;

         ans.push_back(root->data);

         if (root->left)
             leftside(root->left, ans);
         else
             leftside(root->right, ans);
     }

     void rightside(Node* root, vector<int>& ans) {
         if (root == NULL || (root->left == NULL && root->right == NULL))
             return;

         if (root->right)
             rightside(root->right, ans);
         else
             rightside(root->left, ans);

         ans.push_back(root->data);
     }

     void null_guys(Node* root, vector<int>& ans) {
         if (root == NULL)
             return;

         if (root->left == NULL && root->right == NULL) {
             ans.push_back(root->data);
             return;
         }

         null_guys(root->left, ans);
         null_guys(root->right, ans);
     }

 public:
     vector<int> boundaryTraversal(Node* root) {
         vector<int> ans;

         if (root == NULL)
             return ans;

         if (root->left != NULL || root->right != NULL)
             ans.push_back(root->data);

         leftside(root->left, ans);
         null_guys(root, ans);
         rightside(root->right, ans);

         return ans;
     }
 };