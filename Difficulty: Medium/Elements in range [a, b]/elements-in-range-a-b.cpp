class Solution {
  public:
    int fun(vector<int> &arr,int l,int r,int a,int b){
        int low=l,high=r,mid;
        int ans1=-1,ans2=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>=a){
                ans1=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        low=l,high=r;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]<=b){
                ans2=mid;
                low=mid+1;
                
            }
            else{
                high=mid-1;
            }
        }
        if(ans2==r+1)
        return r+1;
        else if(ans1==-1)
        return 0;
        // cout<<ans1<<" "<<ans2<<endl;
        return ans2-ans1+1;
    }
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int n=arr.size();
        for(auto i:queries){
            ans.push_back(fun(arr,0,n-1,i[0],i[1]));
        }
        return ans;
    }
};