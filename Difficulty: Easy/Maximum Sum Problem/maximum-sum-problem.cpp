class Solution {
  public:
    int a;
    int helper(int n,vector<int> &dp){
        if(dp[n]!=-1)
        return dp[n];
        a=(n/2)+(n/3)+(n/4);
        if(a<=n)
        return n;
        return dp[n]=helper(n/2,dp)+helper(n/3,dp)+helper(n/4,dp);
    }
    int maxSum(int n) {
        vector<int> dp(n+1,-1);
        return helper(n,dp);
    }
};