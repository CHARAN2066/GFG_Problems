class Solution {
  public:
    int cntWays(vector<int>& arr) {
        int n=arr.size();
        if(n==1)
        return 1;
        vector<pair<int,int>> pre(n);
        vector<pair<int,int>> suf(n);
        int o=0,e=0;
        for(int i=0;i<n;i++){
            if(i%2==0)
            e+=arr[i];
            else
            o+=arr[i];
            pre[i]={e,o};
        }
        o=0,e=0;
        for(int i=n-1;i>=0;i--){
            if(i%2==0)
            e+=arr[i];
            else
            o+=arr[i];
            suf[i]={e,o};
        }
        // for(auto i:pre){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<endl;
        // cout<<endl;
        // for(auto i:suf){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<endl;
        int ans=0;
        if(suf[1].first==suf[1].second)
        {
                // cout<<"s"<<endl;
                ans++;
        }
        for(int i=1;i<n-1;i++){
            if((pre[i-1].first+suf[i+1].second)==(pre[i-1].second+suf[i+1].first))
            {
                // cout<<i<<endl;
                ans++;
            }
        }
        if(pre[n-2].first==pre[n-2].second)
        {
                // cout<<"e"<<endl;
                ans++;
        }
        return ans;
    }
};