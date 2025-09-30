// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        long long int ans=1,c=0;
        long long int MOD=1e9+7;
        int mi=INT_MIN;
        if(arr.size()==1)
        return arr[0];
        bool n=false,z=false,p=false;
        for(auto i:arr)
        {
            if(i==0)
            {
                z=true;
                continue;
            }
            if(i<0)
            {
                n=true;
                mi=max(mi,i);
                c++;
            }
            if(i>0)
            p=true;
            ans=(ans*i)%MOD;
        }
        if(!p&&!n)
        return 0;
        if(!p&&c==1)
        {
            if(z)
            return 0;
            else
            return ans;
        }
        if(c%2!=0)
        ans/=mi;
        return ans;
    }
};
