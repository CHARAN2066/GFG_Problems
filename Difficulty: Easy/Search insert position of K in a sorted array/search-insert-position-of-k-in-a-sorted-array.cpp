class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        int n=arr.size(),ans=n;
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};