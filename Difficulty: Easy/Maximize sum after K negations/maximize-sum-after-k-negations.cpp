class Solution {
  public:
    long long int maximizeSum(long long int a[], int n, int k) {
        sort(a,a+n);
        long long int mp=INT_MAX,mn=INT_MIN;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            flag=true;
            if(a[i]>0)
            mp=min(mp,a[i]);
            if(a[i]<0)
            mn=max(mn,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            break;
            if(k<=0)
            break;
            a[i]=(-1)*a[i];
            k--;
        }
        long long int ans=0;
        for(int i=0;i<n;i++)
        ans+=a[i];
        if((k>0)&&(!flag))
        {
            if(k%2!=0)
            {
                ans-=2*(min(mp,abs(mn)));
            }
        }
        return ans;
    }
};