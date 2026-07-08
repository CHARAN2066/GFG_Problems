class Solution {
  public:
    void dfs(vector<vector<int>> &mat, int i, int j, int n, int m, vector<vector<int>> &result)
    {
        if (i >= n && j >= m && i < 0 && j < 0) {
            return;
        }
        if (result[i][j] ==  1)
        return;
        result[i][j] = 1;
        for (int a = -1; a <= 1; a++) {
            if (a == 0)
            continue;
            if (a + i >= 0 && a + i < n && mat[a+i][j] >= mat[i][j])
            dfs(mat, i + a, j, n, m, result);
            if (a + j >= 0 && a + j < m && mat[i][j + a] >= mat[i][j])
            dfs(mat, i, j + a, n, m, result);
        }
        return;
    }
    
    void dfs2(vector<vector<int>> &mat, int i, int j, int n, int m, vector<vector<int>> &result)
    {
        if (i >= n && j >= m && i < 0 && j < 0) {
            return;
        }
        if (result[i][j] > 1)
        return;
        result[i][j] += 2;
        for (int a = -1; a <= 1; a++) {
            if (a == 0)
            continue;
            if (a + i >= 0 && a + i < n && mat[a + i][j] >= mat[i][j])
            dfs2(mat, i + a, j, n, m, result);
            if (a + j >= 0 && a + j < m && mat[i][j + a] >= mat[i][j])
            dfs2(mat, i, j + a, n, m, result);
        }
        return;
    }
    
    
    int countCoordinates(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        int m = mat[0].size();
        int ans = 0;
        
        vector<vector<int>> result(n, vector<int> (m, 0));
        for (int i = 0; i < m; i++) {
            dfs(mat, 0, i, n, m, result);
        }
        for (int i = 0; i < n; i++) {
            dfs(mat, i, 0, n, m, result);
        }
        
        for (int i = 0; i < m; i++) {
            dfs2(mat, n - 1, i, n, m, result);
        }
        for (int i = 0; i < n; i++) {
            dfs2(mat, i, m - 1, n, m, result);
        }
        
        for (auto i:result) {
            for (auto j:i) {
                if (j == 3) {
                    ans++;
                }
            }
        } 
        return ans;
    }
};