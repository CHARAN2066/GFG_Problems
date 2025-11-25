class Solution {
  public:
    int subarrayXor(vector<int>& arr) {
        int ans=0,n=arr.size();
        if(n%2==0)
        return 0;
        for(int i=0;i<n;i+=2)
        {
            // if((n-i+1)%2!=0)
            ans=ans^arr[i];
        }
        return ans;
        
    }
};