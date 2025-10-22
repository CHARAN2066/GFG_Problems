class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        int i=0,n=arr.size();
        vector<int> ans;
        for(int i=0;i<=k;i++)
        {
            pq.push(arr[i]);
        }
        ans.push_back(pq.top());
        pq.pop();
        for(int i=k+1;i<n;i++)
        {
            pq.push(arr[i]);
            ans.push_back(pq.top());
            pq.pop();
        }
        while(ans.size()<n)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        for(int i=0;i<n;i++)
        arr[i]=ans[i];
    }
};