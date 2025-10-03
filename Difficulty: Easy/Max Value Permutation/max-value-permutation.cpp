class Solution {
  public:
    int maxValue(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int ans=0,n=arr.size();
        long long int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            ans=(ans+1LL*arr[i]*i)%mod;
        }
        return (int)ans;
    }
};