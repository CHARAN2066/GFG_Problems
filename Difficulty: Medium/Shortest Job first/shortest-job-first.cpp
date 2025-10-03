// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        long long int n=bt.size(),s=0;
        sort(bt.begin(),bt.end());
        for(int i=0;i<n;i++)
        {
            s+=(bt[i]*(n-i-1));
        }
        long long int ans=s/n;
        return ans;
    }
};