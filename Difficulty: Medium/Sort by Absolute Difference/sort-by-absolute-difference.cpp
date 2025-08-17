class Solution {
  public:
    void rearrange(vector<int> &arr, int x) {
        int n=arr.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back({abs(arr[i]-x),arr[i]});
        }
        stable_sort(ans.begin(), ans.end(), [](auto &a, auto &b){
        return a.first < b.first;
        });
        for(int i=0;i<n;i++)
        {
            arr[i]=ans[i].second;
        }
    }
};