class Solution {
  public:
    bool helper(int a, vector<vector<int>> &adj, vector<bool> &visted) {
        queue<pair<int, int>> q;
        q.push({a,  -1});
        int node, par;
        visted[a] = true;
        while (!q.empty()) {
            node = q.front().first;
            par = q.front().second;
            q.pop();
            for (auto i:adj[node]) {
                if (visted[i] && i != par)
                return true;
                if (visted[i])
                continue;
                visted[i] = true;
                q.push({i, node});
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for (auto i:edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<bool> visted(V, false);
        bool ans = false;
        for (int i = 0; i < V; i++) {
            if (!visted[i]) {
                if(helper(i, adj, visted))
                return true;
            }
        }
        return false;
    }
};