class Solution {
  public:
    long subarrayXor(vector<int> &nums, int k) {
        map<int,int> mp;
        int n=nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)        
        prefix[i]=prefix[i-1]^nums[i];
        mp[0]++;
        int x,c=0;
        for(int i=0;i<n;i++)
        {
            x=prefix[i];
            if(mp.find(x^k)!=mp.end())
            c+=mp[x^k];
            mp[x]++;
        }
        return c;
    }
};
