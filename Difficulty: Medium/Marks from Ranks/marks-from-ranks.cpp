class Solution {
  public:
    vector<int> getMarks(vector<int> &l, vector<int> &r, vector<int> &rank) {
        int n = l.size();
        map<int, int> mp;
        vector<int> ans;
        int a = 1;
        for (int i = 0; i < n; i++) {
            for (int j = l[i]; j <= r[i]; j++) {
                ans.push_back(j);
            }
        }
        vector<int> res;
        for (auto i:rank){
            res.push_back(ans[i - 1]);
        }
        return res;
    }
};