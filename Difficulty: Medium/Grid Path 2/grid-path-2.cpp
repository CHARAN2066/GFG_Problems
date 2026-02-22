class Solution {
  public:
    int totalWays(int n, int m, vector<vector<int>>& grid) {
       long long int mod=1e9+7;
       vector<vector<int>> dp(n,vector<int>(m,0));
       if(grid[0][0]==0)
       dp[0][0]=1;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(i==0&&j==0)
               continue;
               else if(i==0){
                   if(grid[i][j-1]==0)
                   dp[i][j]=(dp[i][j-1])%mod;
               }
               else if(j==0){
                   if(grid[i-1][j]==0)
                   dp[i][j]=(dp[i-1][j])%mod;
               }
               else{
                   if(grid[i][j-1]==0)
                   dp[i][j]=(dp[i][j]+dp[i][j-1])%mod;
                   if(grid[i-1][j]==0)
                   dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
               }
           }
       }
       return dp[n-1][m-1];
    }
};