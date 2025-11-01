class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>> &adj) 
	{
	    int a;
	     vector<int> indegree(V,0);
	    for(int i=0;i<V;i++)
	    {
	        a=adj[i].size();
	        for(int j=0;j<a;j++)
	        {
	            indegree[adj[i][j]]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0;i<V;i++)
	    {
	        if(indegree[i]==0)
	        {
	            //cout<<i;
	            q.push(i);
	        }
	    }
	    int temp;
        vector<int> ans;
	    while(!q.empty())
	    {
	        temp=q.front();
	        q.pop();
	        a=adj[temp].size();
	        for(int i=0;i<a;i++)
	        {
	            indegree[adj[temp][i]]--;
	            if(indegree[adj[temp][i]]==0)
	            q.push(adj[temp][i]);
	        }
	        ans.push_back(temp);
	    }
	    int s=ans.size();
	    return ans;
	}
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        int size=prerequisites.size();
       vector<vector<int>> adj(n);
       for(int i=0;i<size;i++)
       {
           adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
       }
       vector<int> ans=topoSort(n,adj);
    //   /for(int i=0;i<ans.size();i++)
       //cout<<ans[i]<<" ";
       if(ans.size()==n)
       return ans;
       else
       return {};   
    }
};