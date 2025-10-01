class Solution {
  public:
    void helper(vector<vector<int>> &ans,int i,vector<int> &arr,int n)
    {
        if(i==n)
        {
            ans.push_back(arr);
            return;
        }
        for(int j=i;j<n;j++)
        {
            swap(arr[i],arr[j]);
            helper(ans,i+1,arr,n);
            swap(arr[i],arr[j]);
        }
    }
    bool equal(vector<int> &a,vector<int> &b)
    {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            return false;
        }
        return true;
    }
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        vector<vector<int>> ans;
        int n=arr.size();
        helper(ans,0,arr,n);
        n=ans.size();
        // return ans;
        vector<vector<int>> res;
        sort(ans.begin(),ans.end());
        for(int i=0;i<n-1;i++)
        {
            if(equal(ans[i],ans[i+1]))
            continue;
            else
            res.push_back(ans[i]);
        }
        res.push_back(ans[n-1]);
        return res;
        
    }
};