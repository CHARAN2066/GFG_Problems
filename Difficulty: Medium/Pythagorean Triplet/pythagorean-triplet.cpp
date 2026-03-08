class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& nums) {
        int m=nums.size();
        unordered_map<int,int> mp;
        vector<int> arr;
        for(int i=0;i<m;i++)
        {
            if(mp[nums[i]*nums[i]]==0)
            arr.push_back(nums[i]);
            mp[nums[i]*nums[i]]++;
        }
        int n=arr.size();
        // cout<<mp[25]<<endl;
        int t=0,c=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i]+1;j<=1000;j++)
            {
                t=arr[i]*arr[i]+j*j;
                if(mp[j*j]==0)
                continue;
                else if(mp[t]==0)
                continue;
                else
                {
                    mp[j*j]=0;
                    mp[t]=0;
                    c++;
                }
            }
        }
        // cout<<c<<endl;
        if(c>0)
        return true;
        return false;
    }
};