class Solution {
  public:
    int countSquare(vector<vector<int>>& mat, int x) {
        int n=mat.size(),m=mat[0].size(),s=0;
        vector<vector<int>> prefix(n,vector<int> (m,0));
        prefix[0][0]=mat[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0&&j==0)
                continue;
                if(i==0)
                prefix[i][j]=mat[i][j]+prefix[i][j-1];
                else if(j==0)
                prefix[i][j]=mat[i][j]+prefix[i-1][j];
                else
                prefix[i][j]=mat[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
            }
        }
        // for(auto i:prefix){
        //     for(auto j:i){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        int t=min(n,m),a,ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=1;k<=min(i+1,j+1);k++){
                    a=prefix[i][j];
                    if(j-k>=0)
                    a-=prefix[i][j-k];
                    if(i-k>=0)
                    a-=prefix[i-k][j];
                    if(i-k>=0&&j-k>=0)
                    a+=prefix[i-k][j-k];
                    if(a==x)
                    {
                        // cout<<i<<" "<<j<<" "<<k<<endl;
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};