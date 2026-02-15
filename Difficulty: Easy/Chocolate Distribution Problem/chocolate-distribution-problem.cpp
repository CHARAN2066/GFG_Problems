class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        int n=a.size(),ans=INT_MAX;
        // for(auto i:a)
        // cout<<i<<" ";
        // cout<<endl;
        for(int i=0;i<=n-m;i++)
        {
            // cout<<abs(a[i]-a[i+m-1])<<endl;
            ans=min(ans,abs(a[i]-a[i+m-1]));
        }
        return ans;
    }
};