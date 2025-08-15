class Solution {
  public:
    int helper(int n,int r,vector<vector<int>> &dp)
    {
        if(n<r)
        return 0;
        if(r==0)
        return 1;
        if(dp[n][r]!=-1)
        return dp[n][r];
        return dp[n][r]=helper(n-1,r-1,dp)+helper(n-1,r,dp);
    }
    int nCr(int n, int r) {
        vector<vector<int>> dp(n+1,vector<int>(r+1,-1));
        int ans=helper(n,r,dp);
        return ans;
    }
};