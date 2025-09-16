class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool compare(const pair<int,int> &a,const pair<int,int> &b)
    {
        if(a.second==b.second)
        return a.first<b.first;
        return a.second<b.second;
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        vector<pair<int,int>> meeting;
        int n=start.size();
        for(int i=0;i<n;i++)
        {
            meeting.push_back({start[i],end[i]});
        }
        sort(meeting.begin(),meeting.end(),compare);
        n=meeting.size();
        int ans=0,l=-1;
        for(int i=0;i<n;i++)
        {
            if(l<meeting[i].first)
            {
                l=meeting[i].second;
                ans++;
            }
        }
        return ans;
        
    }
};