class Solution {
  public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> temp;
        int i = 0, n = arr.size(), a = 1;
        while (i < n) {
            for (int j = i; j < a + i&& j < n; j++) {
                temp.push_back(arr[j]);
            }
            i += (a);
            sort(temp.begin(), temp.end());
            ans.push_back(temp);
            a *= 2;
            temp.clear();
        }
        return ans;
    }
};
