class Solution {
  public:
    int helper(int n,int pre,vector<vector<int>> &dp){
        if(n==0)
        return 1;
        if(dp[n][pre+1]!=-1)
        return dp[n][pre+1];
        int ans=0;
        if(pre==1){
            ans+=helper(n-1,0,dp);
        }
        else{
            ans+=helper(n-1,0,dp);
            ans+=helper(n-1,1,dp);
        }
        return dp[n][pre+1]=ans;
    }
    int countStrings(int n) {
        vector<vector<int>> dp(n+1,vector<int>(3,-1));
        int a=helper(n,-1,dp);
        return a;
    }
};