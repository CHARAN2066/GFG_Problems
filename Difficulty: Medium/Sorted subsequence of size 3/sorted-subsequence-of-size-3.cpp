class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int m=INT_MAX,ma=INT_MIN,n=arr.size();
        vector<pair<int,int>> ans(n);
        if(n<3)
        return {};
        for(int i=0;i<n;i++){
            ans[i].first=m;
            m=min(m,arr[i]);
        }
        for(int i=n-1;i>=0;i--){
            ans[i].second=ma;
            ma=max(ma,arr[i]);
        }
        for(int i=1;i<n-1;i++){
            if(ans[i].first<arr[i]&&arr[i]<ans[i].second)
            return {ans[i].first,arr[i],ans[i].second};
        }
        return {};
    }
};