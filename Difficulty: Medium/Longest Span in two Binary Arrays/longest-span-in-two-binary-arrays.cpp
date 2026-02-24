class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        int n=a1.size(),s=0,ans=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            s+=a1[i];
            s-=a2[i];
            if(mp.find(s)!=mp.end())
            ans=max(ans,(i-mp[s]));
            else
            mp[s]=i;
        }
        return ans;
    }
};