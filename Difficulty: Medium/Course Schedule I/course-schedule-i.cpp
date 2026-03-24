class Solution {
  public:
    bool canFinish(int n, vector<vector<int>>& edges) {
        queue<int> q;
        vector<int> indegree(n,0);
        vector<vector<int>> adj(n);
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            indegree[i[1]]++;
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int node;
        vector<int> ans;
        while(!q.empty()){
            node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto i:adj[node]){
                indegree[i]--;
                if(indegree[i]==0)
                q.push(i);
            }
        }
        if(ans.size()==n)
        return true;
        return false;
           
    }
};