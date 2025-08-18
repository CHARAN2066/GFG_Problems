// User function Template for C++
class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        int m=0;
        for(auto i:citations)
        m=max(m,i);
        vector<int> fre(m+1,0);
        for(auto i:citations)
        fre[i]++;
        vector<int> suffix(m+1,0);
        suffix[m]=fre[m];
        for(int i=m-1;i>=0;i--)
        suffix[i]=suffix[i+1]+fre[i];
        int ans=0;
        for(int i=1;i<=m;i++)
        {
            // cout<<suffix[i]<<" ";
            if(suffix[i]>=i)
            ans=max(ans,i);
        }
        return ans;
    }
};
