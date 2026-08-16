class Solution {
  public:
    vector<int> ans;
    void helper(vector<int>& arr, int i, int n, int pr, bool flag) {
        if (i == n) {
            if (flag)
            ans.push_back(pr);
            return;
        }
        helper(arr, i + 1, n, pr * arr[i], true);
        helper(arr, i + 1, n, pr, flag);
        return;
    }
    int minProd(vector<int>& arr) {
        int n = arr.size(), res = INT_MAX;
        // for (auto i:ans)
        // {
        //     cout<<i<<" ";
        // }
        // cout<< endl;
        ans.clear();
        helper(arr, 0, n, 1, false);
        for (auto i:ans)
        {
            // cout<<i<<" ";
            res = min(res, i);}
        return res;
    }
}; 