class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size(),x,y;
        vector<pair<double,int>> a;
        double dis;
        for(int i=0;i<n;i++)
        {
            x=points[i][0];
            y=points[i][1];
            dis=sqrt(x*x+y*y);
            a.push_back({dis,i});
        }
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        int b;
        for(int i=0;i<k;i++)
        {
            b=a[i].second;
            ans.push_back({points[b][0],points[b][1]});
        }
        return ans;
    }
};
