class Solution {
  public:
    bool kSubstr(string &s, int k) {
        int n=s.size(),c=0;
        map<string,int> mp;
        string temp;
        if(n%k!=0)
        return false;
        for(int i=0;i<n;i++){
            temp.push_back(s[i]);
            if(temp.size()==k){
                mp[temp]++;
                if(mp[temp]==2)
                c++;
                temp="";
            }
        }
        if(temp.size()==k){
            mp[temp]++;
            if(mp[temp]==2)
            c++;
            temp="";
        }
        // cout<<c<<endl;
        return mp.size()<=2&&c<=1;
    }
};