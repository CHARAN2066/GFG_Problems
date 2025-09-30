// User function Template for C++

class Solution {
  public:
    vector<int> maxMeetings(int n, vector<int> &S, vector<int> &F) {
        vector<pair<int,pair<int,int>>> me;
        for(int i=0;i<n;i++)
        {
            me.push_back({F[i],{S[i],i}});
        }
        sort(me.begin(),me.end());
        int finish=0;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(me[i].second.first>finish)
            {
                ans.push_back(me[i].second.second+1);
                finish=me[i].first;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};