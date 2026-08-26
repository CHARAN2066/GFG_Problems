class Solution {
  public:
   bool isNegativeWeightCycle(int V, vector<vector<int>>& edges) {
       vector<int> dist(V, 0);

       for (int i = 0; i < V - 1; i++) {
           bool changed = false;

           for (auto &edge : edges) {
               int u = edge[0];
               int v = edge[1];
               int wt = edge[2];

               if (dist[u] + wt < dist[v]) {
                   dist[v] = dist[u] + wt;
                   changed = true;
               }
           }

           // No relaxation means no further changes are possible
           if (!changed)
               break;
       }

       // Check for negative cycle
       for (auto &edge : edges) {
           int u = edge[0];
           int v = edge[1];
           int wt = edge[2];

           if (dist[u] + wt < dist[v])
               return true;
       }

       return false;
   }
};