class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int n=arr.size();
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++)
        {
            a.push_back({((arr[i]/100)*60+(arr[i]%100)),1});
            a.push_back({((dep[i]/100)*60+(dep[i]%100)),2});
        }
        sort(a.begin(),a.end());
        int res=0;
        n=a.size();
        int p=0;
        for(auto i:a)
        {
            if(i.second==1)
            {
                p++;
                res=max(res,p);
            }
            if(i.second==2)
            {
                p--;
            }
        }
        
        return res;
    }
};
