class Solution {
  public:
    int buyMaximumProducts(int n, int k, int price[]) {
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({price[i],i});
        }
        sort(arr.begin(),arr.end());
        // for(auto i:arr)
        // cout<<i.first<<" "<<i.second<<endl;
        int c,i=0,ans=0;
        while(k>0)
        {
            if(i>=n)
            break;
            
            if(k<arr[i].first)
            {
                i++;
                continue;
            }
            c=min((k/(arr[i].first)),arr[i].second+1);
            ans+=c;
            // cout<<c<<endl;
            k-=c*arr[i].first;
            i++;
        }
        return ans;
    }
};
