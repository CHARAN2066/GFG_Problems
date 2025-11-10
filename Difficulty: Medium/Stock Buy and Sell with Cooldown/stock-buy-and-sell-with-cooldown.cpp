class Solution {
  public:
    int stock(vector<int>& prices,int i,int n,int curr,int state,vector<vector<vector<int>>> &dp)
    {
        if(i==n)
        return 0;
        if(dp[i][curr][state]!=-1)
        return dp[i][curr][state];
        int sell=0,buy=0,notpick=0;
        if(state==0&&curr==0)
        {
            sell=-prices[i]+stock(prices,i+1,n,1,0,dp);
        }
        if(curr!=0)
        {
            sell=prices[i]+stock(prices,i+1,n,0,1,dp);
        }
        notpick=stock(prices,i+1,n,curr,0,dp);
        return dp[i][curr][state]=max(sell,notpick);
    }
    int maxProfit(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>> (2,vector<int>(2,-1)));
        return stock(arr,0,n,0,0,dp);
        
    }
};