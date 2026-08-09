class Solution {
  public:
    int helper(vector<vector<int>> &mat, int i, int j, int n, int m, vector<vector<int>> &dp) {
        // cout<< i<< " "<< j<<endl;
        if (i == n - 1) {
            return mat[i][j];
        }
        if (dp[i][j] != -1)
        return dp[i][j];
        int ans = 0, t;
        for (int a = 0; a < m; a++) {
            if (a != j)
            {
                t = helper(mat, i + 1, a, n, m, dp);
                ans = max(ans, t);
            } 
        }
        return dp[i][j] = mat[i][j] + ans;
    }
    int zigzagSequence(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size(), ans = 0;
        vector<vector<int>> dp(n, vector<int>(m, -1));
        for (int i = 0; i< m; i++)
        ans =max(ans, helper(mat, 0, i, n, m, dp));
        return ans;
    }
};