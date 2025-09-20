class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        vector<pair<double,int>> arr;
        int n=val.size();
        for(int i=0;i<n;i++)
    
        
        {
            arr.push_back({(static_cast<double>(val[i])/static_cast<double>(wt[i])),i});
        }
        sort(arr.begin(),arr.end(),greater<pair<double,int>>());
        double ans=0,temp;
        for(auto i:arr)
        {
            temp=min(capacity,wt[i.second]);
            capacity-=temp;
            ans+=temp*i.first;
            if(capacity==0)
            break;
        }
        return ans;
    }
};
