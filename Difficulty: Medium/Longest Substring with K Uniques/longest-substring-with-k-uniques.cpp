class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int l=0,d=0,n=s.size(),ans=-1;
        map<char,int> mp;
        for(int end=0;end<n;end++){
            mp[s[end]]++;
            if(mp[s[end]]==1)
            d++;
            while(d>k){
                mp[s[l]]--;
                if(mp[s[l]]==0)
                d--;
                l++;
            }
            if(d==k)
            ans=max(ans,(end-l+1));
        }
        return ans;
    }
};