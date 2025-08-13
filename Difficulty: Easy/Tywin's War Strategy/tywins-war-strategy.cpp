class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        vector<int> ans;
        int n=arr.size();
        for(auto i:arr)
        {
            if(i%k==0)
            ans.push_back(0);
            else
            ans.push_back(k-(i%k));
        }
        sort(ans.begin(),ans.end());
        // for(auto i:ans)
        // cout<<i<<" ";
        // cout<<endl;
        if(n%2==0)
        n=n/2;
        else
        n=(n/2)+1;
        int res=0;
        for(int i=0;i<n;i++)
        res+=ans[i];
        return res;
    }
};