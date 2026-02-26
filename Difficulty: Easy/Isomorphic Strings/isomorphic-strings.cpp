class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        map<char,char> mp;
        for(char i='a';i<='z';i++){
            mp[i]='*';
        }
        int n=s1.size();
        for(int i=0;i<n;i++){
            if(mp[s2[i]]=='*'){
                mp[s2[i]]=s1[i];
            }
            else if(mp[s2[i]]!=s1[i])
            {
                return false;
            }
        }
        for(char i='a';i<='z';i++){
            mp[i]='*';
        }
        for(int i=0;i<n;i++){
            if(mp[s1[i]]=='*'){
                mp[s1[i]]=s2[i];
            }
            else if(mp[s1[i]]!=s2[i])
            {
                return false;
            }
        }
        return true;
    }
};