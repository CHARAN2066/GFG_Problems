class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto i:matrix)
        {
            for(auto j:i)
            pq.push(j);
        }
        int ans;
        for(int i=0;i<k;i++)
        {
            ans=pq.top();
            pq.pop();
        }
        return ans;
    }
};