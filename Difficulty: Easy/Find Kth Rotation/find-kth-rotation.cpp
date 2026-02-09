class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n=arr.size(),low=0,right=n-1,mid;
        while(low<=right){
            mid=(low+right)/2;
            // cout<<arr[mid]<<endl;
            if((mid!=n-1)&&(arr[mid]>arr[mid+1]))
            {
                return mid+1;
            }
            if(arr[low]<=arr[mid]){
                low=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return 0;
    }
};
