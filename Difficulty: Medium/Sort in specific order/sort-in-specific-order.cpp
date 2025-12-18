class Solution {
  public:
    void sortIt(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int o=0,n=arr.size();
        for(auto i:arr){
            if(i%2!=0)
            o++;
        }
        int l=0,r=n-1;
        while(l<=r){
            if(arr[l]%2==0&&arr[r]%2!=0){
                swap(arr[l],arr[r]);
            }
            else if(arr[l]%2!=0)
            l++;
            else if(arr[r]%2==0)
            r--;
        }
        sort(arr.begin(),arr.begin()+o,greater<int>());
        sort(arr.begin()+o,arr.end());
    }
};