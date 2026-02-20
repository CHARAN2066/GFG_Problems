class Solution {
  public:
    static bool cmp(const string &a,const string &b){
        string c=a+b;
        string d=b+a;
        if(c>d){
            return true;
        }
        else
        return false;
    }
    string findLargest(vector<int> &arr) {
        int t,r,n=arr.size(),z=0;
        vector<string> ans(n);
        for(int i=0;i<n;i++){
            t=arr[i];
            if(t==0)
            {
                z++;
                ans[i].push_back('0');
            }
            while(t>0){
                r=t%10;
                ans[i].push_back(r+'0');
                t=t/10;
            }
            reverse(ans[i].begin(),ans[i].end());
        }
        sort(ans.begin(),ans.end(),cmp);
        if(ans.size()==z)
        return "0";
        string res;
        for(auto i:ans){
            for(auto j:i)
            {
                // cout<<j<<" ";
                res.push_back(j);
            }
            // cout<<endl;
        }
        return res;
    }
};