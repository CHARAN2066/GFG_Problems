class Solution {
  public:
    string minWindow(string &s, string &p) {
        map<char,int> mp;
        for(auto i:p){
            mp[i]++;
        }
        for(char i='a';i<='z';i++)
        {
            if(mp[i]==0)
            mp[i]=-1;
        }
        int l=0,ans=INT_MAX,r=p.size();
        bool flag=true;
        map<char,int> m;
        int n=s.size(),res=0;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            if(mp[s[i]]>=m[s[i]])
            {
                r--;
            }
            // cout<<r<<endl;
            while(r==0){
                // cout<<l<<" "<<i<<endl;
                if(ans>(i-l+1)){
                    ans=i-l+1;
                    res=l;
                }
                m[s[l]]--;
                if(mp[s[l]]>m[s[l]])
                {
                    r++;
                }
                l++;
            }
        }
        // cout<<ans<<endl;
        if(ans==INT_MAX)
        return "";
        return s.substr(res,ans);
    }
};