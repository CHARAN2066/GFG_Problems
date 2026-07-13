class Solution {
  public:
    vector<int> ans;
    
    void helper(vector<vector<int>> &adj, int node, vector<bool> &visted) {
        if (visted[node])
        return;
        visted[node] = true;
        ans.push_back(node);
        for (auto i:adj[node]) {
            helper(adj, i, visted);
        }
        return;
    }
    
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        vector<vector<int>> res;
        vector<bool> visted(V, false);
        for (auto i:edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        for (int i = 0; i < V; i++) {
            if (!visted[i]) {
                helper(adj, i, visted);
                // for (auto k:ans)
                // cout<<k<<" ";
                // cout<<endl;
                res.push_back(ans);
                ans.clear();
            }
        }
        return res;
    }
};
