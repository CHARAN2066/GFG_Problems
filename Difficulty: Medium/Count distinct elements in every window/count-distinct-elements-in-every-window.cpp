class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        int u=0,n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]==1)
            u++;
        }
        vector<int> ans;
        ans.push_back(u);
        for(int i=k;i<n;i++){
            mp[arr[i-k]]--;
            if(mp[arr[i-k]]==0)
            u--;
            mp[arr[i]]++;
            if(mp[arr[i]]==1)
            u++;
            ans.push_back(u);
        }
        return ans;
    }
};