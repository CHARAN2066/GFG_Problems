class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        queue<int> q;
        q.push(0);
        int node, n = adj.size();
        vector<int> visted(n, 0), ans;
        visted[0] = 1;
        while (!q.empty()) {
            node = q.front();
            q.pop();
            ans.push_back(node);
            for (auto i:adj[node]) {
                if (visted[i])
                continue;
                visted[i] = 1;
                q.push(i);
            }
        }
        return ans;
    }
};