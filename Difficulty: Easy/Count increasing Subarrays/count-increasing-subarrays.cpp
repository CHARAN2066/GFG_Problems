class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        int n=arr.size(),c=0,ans=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1])
            c++;
            else
            {
                c=0;
            }
            ans+=c;
        }
        return ans;
    }
};
