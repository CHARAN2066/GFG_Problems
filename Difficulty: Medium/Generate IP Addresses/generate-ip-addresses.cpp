class Solution {
  public:
    vector<string> ans;
    void helper(string &s,int i,int n,string cur,int parts){
        if(i==n&&parts==4){
            cur.pop_back();
            ans.push_back(cur);
            return;
        }
        if(i>=n||parts>=4) 
        return;
        for(int len=1;len<=3;len++){
            if(i+len>n) break;
            string temp=s.substr(i,len);
            if((temp.size()>1&&temp[0]=='0')||stoi(temp)>255) 
            continue;
            helper(s,i+len,n,cur+temp+".",parts+1);
        }
    }
    vector<string> generateIp(string &s) {
        helper(s,0,s.size(),"",0);
        return ans;
    }
};