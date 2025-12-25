class Solution {
  public:
    int power(int a,int b){
        int ans=1;
        for(int i=1;i<=b;i++){
            ans*=a;
        }
        return ans;
    }
    int nthRoot(int n, int m) {
        int ans=-1,low=0,high=m,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(power(mid,n)==m)
            return mid;
            else if(power(mid,n)>m){
                high=mid-1;
            }
            else{
                // ans=mid;
                low=mid+1;
            }
        }
        return ans;
    }
};