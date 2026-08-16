class Solution {
  public:
    bool helper(vector<vector<int>> &adj, int node, vector<int> &visted, vector<int> &path) {
        if (visted[node] && path[node])
        return true;
        if (visted[node])
        return false;
        visted[node] = true;
        path[node] =  true;
        bool ans = false;
        for (auto i:adj[node]) {
            ans = ans || helper(adj, i, visted, path);
        }
        path[node] = false;
        return ans;
    } 
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);
        for (auto i:edges) {
            adj[i[0]].push_back(i[1]);
        }
        vector<int> visted(V, false);
        vector<int> path(V, false);
        for (int i = 0; i < V; i++) {
            if (!visted[i]) {
                if (helper(adj, i, visted, path))
                return true;
                
            }
        }
        return false;
    }
};