class Solution {
  public:
    bool fun(vector<int> &stalls,int mid,int k){
        int n=stalls.size();
        int a=stalls[0];
        k--;
        for(int i=1;i<n;i++){
            if(abs(stalls[i]-a)>=mid){
                a=stalls[i];
                k--;
                if(k==0)
                return true;
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        int ma=0,m=INT_MAX;
        sort(stalls.begin(),stalls.end());
        for(auto i:stalls){
            ma=max(ma,i);
            m=min(m,i);
        }
        int low=0,high=ma-m,mid,ans=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(fun(stalls,mid,k)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};