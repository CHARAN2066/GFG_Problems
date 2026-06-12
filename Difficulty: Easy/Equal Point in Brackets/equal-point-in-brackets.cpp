class Solution {
  public:
    int findIndex(string &s) {
        int t=0,a,c=0,o=0,n=s.size();
        for(auto i:s){
            if(i==')')
            t++;
        }
        for(int i=0;i<n;i++){
            if(t-c==o)
            return i;
            if(s[i]=='(')
            o++;
            else
            c++;
            
        }
        if(o==0)
        return n;
        return -1;
    }
};