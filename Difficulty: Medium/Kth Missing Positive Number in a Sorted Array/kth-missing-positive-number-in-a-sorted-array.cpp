// User function template for C++

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n=arr.size();
        int m=0;
        for(auto i:arr)
        m=max(m,i);
        vector<int> fre(m+1,0);
        for(auto i:arr)
        {
            fre[i]++;
        }
        int a=0;
        for(int i=1;i<=m;i++)
        {
            if(fre[i]==0)
            {
                a++;
                if(a==k)
                return i;
                
            }
        }
        if(a<k)
        {
            return m+(k-a);
        }
        return -1;
    }
};
