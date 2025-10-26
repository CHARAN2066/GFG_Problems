class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<long long int,vector<long long int>,greater<long long int>> q;
        long long int sum=0;
        for(auto i:arr)
        q.push(i);
        while(!q.empty())
        {
            int a=q.top();
            q.pop();
            if(q.size()==0)
            return sum;
            int b=q.top();
            // cout<<a<<b<<endl;
            q.pop();
            q.push(a+b);
            sum+=(a+b);
        }
        return -1;
    }
};