class Solution {
  public:
    int fun(vector<int>& arr,int a,int b,int x){
        int f=-1,l=-1,low=a,high=b,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==x){
                f=mid;
                high=mid-1;
            }
            else if(arr[mid]<x)
            {
                low=mid+1;
                
            }
            else{
                high=mid-1;
            }
        }
        low=a,high=b;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==x){
                l=mid;
                low=mid+1;
            }
            else if(arr[mid]<x)
            {
                low=mid+1;
                
            }
            else{
                high=mid-1;
            }
        }
        if(f==-1&&l==-1)
        return 0;
        // cout<<f<<" "<<l<<endl;
        return l-f+1;
        
    }
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto i:queries){
            ans.push_back(fun(arr,i[0],i[1],i[2]));
        }
        return ans;
        
    }
};