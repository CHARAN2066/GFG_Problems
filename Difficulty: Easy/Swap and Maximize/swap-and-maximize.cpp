class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        int n=arr.size(),a=0;
        sort(arr.begin(),arr.end());
        vector<int> ans(n);
        for(int i=0;i<n;i+=2)
        {
            ans[i]=arr[a];
            a++;
        }
        a=n-1;
        for(int i=1;i<n;i+=2)
        {
            ans[i]=arr[a];
            a--;
        }
        int res=0;
        for(int i=0;i<n-1;i++)
        {
            // cout<<ans[i]<<" ";
            res+=abs(ans[i]-ans[i+1]);
        }
        res+=abs(ans[n-1]-ans[0]);
        // cout<<endl;
        return res;
        
        
    }
};
