class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        map<int,pair<int,int>> mp;
        for(auto i:a)
        mp[i].first=1;
        for(auto i:b)
        mp[i].second=1;
        vector<int> ans;
        for(auto i:mp){
            if(i.second.first==1&&i.second.second==1)
            ans.push_back(i.first);
        }
        return ans;
    }
};