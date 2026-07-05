class Solution {
  public:
    int maxCharGap(string &s) 
    {
        vector<pair<int,int>> boundaries (26 , {-1 , -1});
        int n = s.size() , ans = -1;
        for (int i = 0; i < n; i++){
            if (boundaries[s[i]-'a'].first == -1)
                boundaries[s[i]-'a'].first = i;
            else 
                boundaries[s[i]-'a'].second = i;
        }
        for (int i = 0; i < n; i++){
            if (boundaries[s[i]-'a'].first == -1 || boundaries[s[i]-'a'].second == -1)
                continue;
            else
                ans = max (ans , boundaries[s[i]-'a'].second - boundaries[s[i]-'a'].first - 1);
        }
        
        return ans;
    }
};