class Solution {
  public:
    vector<vector<int>> printGraph(int v, vector<vector<int>>& edges) {
        vector<vector<int>> adj(v);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int w = edges[i][1];
            adj[u].push_back(w);
            adj[w].push_back(u);
        }
        return adj;
    }
};
