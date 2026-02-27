class Solution {
  public:
    int isAvaiable(vector<int>& arr,int target){
        int n=arr.size(),s=0;
        for(auto i:arr) s+=i;
        vector<vector<int>> dp(n,vector<int> (s+1,0));
        dp[0][0]+=1;
        dp[0][arr[0]]+=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<=s;j++){
                if(dp[i-1][j]!=0)
                {
                    dp[i][j]+=dp[i-1][j];
                    dp[i][j+arr[i]]+=dp[i-1][j];
                }
            }
        }
        return dp[n-1][target];
    }
    int countPartitions(vector<int>& arr, int diff) {
        int n=arr.size(),s=0,ans=0;
        for(auto i:arr) s+=i;
        if(((s-diff)%2!=0)||(s<diff))
        return 0;
        int a=(s-diff)/2;
        int b=s-a;
        // cout<<isAvaiable(arr,a)<<" "<<isAvaiable(arr,b)<<endl;
        return min(isAvaiable(arr,a),isAvaiable(arr,b));
        
    }
};