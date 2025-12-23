class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        int ans=0,n=arr.size();
        for(int i=0;i<n;i++){
            ans+=((n-i)*(i+1)*arr[i]);
        }
        return ans;
    }
};