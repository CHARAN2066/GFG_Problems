class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n=arr.size();
        vector<int> mp(n+1,0);
        long long int s=0,a,b;
        for(auto i:arr){
            mp[i]++;
            if(mp[i]==2)
            a=i;
            s+=i;
        }
        s-=a;
        b=(1LL*n*(n+1))/2;
        b=(int)(b-s);
        return {a,b};
    }
};