class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        map<int,int> mp;
        for(auto i:arr) mp[i]++;
        vector<int> ans;
        for(int i=low;i<=high;i++){
            if(mp.find(i)==mp.end())
            ans.push_back(i);
        }
        return ans;
    }
};