class Solution {
  public:
    int totalElements(vector<int> &arr) {
        int l=0,n=arr.size(),d=0,ans=0;
        map<int,int> mp;
        for(int end=0;end<n;end++){
            if(mp[arr[end]]==0)
            {
                d++;
            }
            mp[arr[end]]++;
            while(d>2){
                if(mp[arr[l]]>0)
                mp[arr[l]]--;
                if(mp[arr[l]]==0)
                d--;
                l++;
            }
            ans=max(ans,(end-l+1));
        }
        return ans;
        
    }
};