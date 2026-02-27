class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        int s=0,n=arr.size();
        for(auto i:arr) s+=i;
        vector<vector<int>> dp(n,vector<int> (s+1,0));
        dp[0][arr[0]]+=1;
        dp[0][0]+=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<=s;j++)
            {
                if(dp[i-1][j]!=0)
                {
                    dp[i][j+arr[i]]+=dp[i-1][j];
                    dp[i][j]+=dp[i-1][j];
                }
            }
        }
        return dp[n-1][target];
    }
};