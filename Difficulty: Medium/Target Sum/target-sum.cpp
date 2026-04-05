class Solution {
  public:
    int helper(vector<int>& nums,int target,int n,int i,vector<vector<int>> &dp)
    {
        if(i==n)
        {
            if(target==0)
            return 1;
            else
            return 0;
        }
        if(dp[i][target+1000]!=-1)
        return dp[i][target+1000];
        int pick1=helper(nums,target-nums[i],n,i+1,dp);
        int pick2=helper(nums,target+nums[i],n,i+1,dp);
        return dp[i][target+1000]=pick1+pick2;
    }
    int totalWays(vector<int>& nums, int target) {
     int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(2001,-1));
        int ans=helper(nums,target,n,0,dp);
        return ans;
    }
};