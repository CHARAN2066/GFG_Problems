class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int a,ans=0;
        int n=arr.size();
        for(int i=0;i<k;i++){
            a=a^arr[i];
        }
        ans=max(ans,a);
        for(int i=k;i<n;i++){
            a=a^arr[i-k];
            a=a^arr[i];
            ans=max(ans,a);
        }
        return ans;
    }
};