class Solution {
  public:
    int helper(int x,int y,int z,int c,int n,vector<int> &dp)
    {
        if(c>n)
        return INT_MIN;
        if(c==n)
        return 0;
        if(dp[c]!=-2)
        return dp[c];
        int a=0,b=0,d=0;
        // if((c+x)<=n)
        a=1+helper(x,y,z,c+x,n,dp);
        // if((c+y)<=n)
        b=1+helper(x,y,z,c+y,n,dp);
        // if((c+z)<=n)
        d=1+helper(x,y,z,c+z,n,dp);
        int res=max({a,b,d});
        return dp[c]=res;
        
    }
    int maximizeTheCuts(int n, int x, int y, int z) {
        vector<int> dp(n+1,-2);
        int ans=helper(x,y,z,0,n,dp);
        if(ans<0)
        return 0;
        else
        return ans;
    }
};