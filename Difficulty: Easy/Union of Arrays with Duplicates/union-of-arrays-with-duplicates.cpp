class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_map<int,int> mp;
        for(auto i:a) mp[i]=1;
        for(auto i:b) mp[i]=1;
        vector<int> ans;
        for(auto i:mp){
            ans.push_back(i.first);
        }
        return ans;
    }
};