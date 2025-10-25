class Solution {
  public:
    int minOperations(vector<int>& arr) {
        priority_queue<double> pq;
        double s=0;
        for(auto i:arr)
        {
            s+=i;
            pq.push(static_cast<double>(i));
        }
        double sum=s;
        sum/=2;
        double t;
        int ans=0;
        while(!pq.empty()){
            t=pq.top();
            pq.pop();
            pq.push(t/2);
            ans++;
            s-=(t/2);
            if(s<=sum)
            return ans;
        }
        return -1;
    }
};