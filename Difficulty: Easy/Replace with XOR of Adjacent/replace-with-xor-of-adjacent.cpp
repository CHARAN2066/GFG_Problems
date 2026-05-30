class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        int n=arr.size();
        if(n==1)
        return;
        int t1=arr[0],t2=arr[1];
        arr[0]^=arr[1];
        for(int i=1;i<n-1;i++){
            arr[i]=t1^arr[i+1];
            t1=t2;
            t2=arr[i+1];
        }
        arr[n-1]=t1^arr[n-1];
        return;
    }
};