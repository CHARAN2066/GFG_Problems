class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        int m=0;
        for(auto i:arr)
        m=max(m,i);
        int l=1,h=m,mid,ans=0,res=INT_MAX;
        while(l<=h){
            mid=(l+h)/2;
            ans=0;
            for(auto i:arr){
                if(i<mid){
                    ans++;
                }
                else{
                    ans+=(i/mid);
                    if(i%mid!=0)
                    ans++;
                }
            }
            if(ans>k){
                l=mid+1;
            }
            else{
                res=min(res,mid);
                h=mid-1;
            }
        }
        return res;
    }
};