class Solution {
  public:
    class disjointSet
{
  vector<int> size;
  vector<int> parent;
  public:
  disjointSet(int n)
  {
      size.resize(n,1);
      parent.resize(n);
      for(int i=0;i<n;i++)
      parent[i]=i;
  }
  int findParent(int node)
  {
      if(node==parent[node])
      return node;
      return parent[node]=findParent(parent[node]);
  }
  void unionBySize(int u,int v)
  {
      int a=findParent(u);
      int b=findParent(v);
      if(a==b)
      return;
      if(size[a]<size[b])
      {
          parent[a]=b;
          size[a]+=size[b];
      }
      else
      {
          parent[b]=a;
          size[b]+=size[a];
      }
  }
};
    int minEdgesReq(int n, vector<vector<int>>& edge) {
        disjointSet graph(n);
        int c=0;
        int m=edge.size();
        int u,v;
        for(int i=0;i<m;i++)
        {
            u=edge[i][0];
            v=edge[i][1];
            if(graph.findParent(u)==graph.findParent(v))
            c++;
            else
            graph.unionBySize(u,v);
        }
        vector<int> comp(n,0);
        for(int i=0;i<n;i++)
        {
            comp[graph.findParent(i)]++;
        }
        int components=0;
        for(auto i:comp)
        {
            if(i!=0)
            components++;
        }
        if((components-1)<=c)
        return components-1;
        else
        return -1;
        
    }
};