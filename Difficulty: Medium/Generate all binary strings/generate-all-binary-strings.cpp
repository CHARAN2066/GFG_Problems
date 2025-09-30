class Solution {
  public:
    string binary(int n,int k)
    {
        int r;
        string ans;
        while(n>0)
        {
            r=n%2;
            ans.push_back(r+'0');
            n=n/2;
        }
        int s=ans.size();
        for(int i=0;i<k-s;i++)
        ans.push_back('0');
        reverse(ans.begin(),ans.end());
        // cout<<ans<<endl;
        return ans;
    }
    vector<string> binstr(int n) {
        vector<string> ans;
        int t=n;
        n=pow(2,n)-1;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(binary(i,t));
        }
        return ans;
    }
};