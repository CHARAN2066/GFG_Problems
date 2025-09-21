class Solution {
  public:
    string chooseandswap(string str) {
        string s;
        char mi;
        char t='*',m='*';
        map<char,int> mp;
        for(auto i:str)
        {
            if(mp[i]>0)
            continue;
            s.push_back(i);
            mp[i]++;
        }
        bool flag=false;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            mi='z';
            for(int j=i+1;j<n;j++)
            {
                if(s[i]>s[j])
                {
                    mi=min(mi,s[j]);
                    flag=true;
                }
            }
            if(flag)
            {
                m=mi;
                t=s[i];
                break;
            }
        }
        n=str.size();
        // cout<<t<<" "<<m<<endl;
        if(t=='*'&&m=='*')
        return str;
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            if(str[i]==m)
            {
                temp.push_back(i);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(str[i]==t)
            {
                // cout<<i<<endl;
                str[i]=m;
                
            }
        }
        // cout<<str<<endl;
        for(auto i:temp)
        {
            // cout<<i<<endl;
            str[i]=t;
        }
        return str;
    }
};
