/*
Definition for Node
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
    vector<int> bottomView(Node *root) {
        // code here
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
         while(!q.empty()){
            pair<Node*,int> p=q.front();
            int hd=p.second;
            q.pop();
            mp[hd]=p.first->data;
            if(p.first->left){
                q.push({p.first->left,hd-1});
            }
            if(p.first->right){
                q.push({p.first->right,hd+1});
            }
            
         }
        
        for(auto it: mp){
            ans.push_back(it.second);
        }
        
        return ans;
        
    }
};