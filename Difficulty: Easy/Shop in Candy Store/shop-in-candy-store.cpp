class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        sort(prices.begin(),prices.end());
        int n=prices.size();
        int c=ceil(static_cast<double>(n)/static_cast<double>(k+1));
        int ans1=0,ans2=0;
        for(int i=0;i<c;i++)
        {
            ans1+=prices[i];
        }
        for(int i=n-1;i>n-1-c;i--)
        {
            ans2+=prices[i];
        }
        return {ans1,ans2};
    }
};