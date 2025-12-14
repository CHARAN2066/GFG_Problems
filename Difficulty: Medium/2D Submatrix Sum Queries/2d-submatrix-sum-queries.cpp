class Solution {
  public:
    vector<int> prefixSum2D(vector<vector<int>> &mat, vector<vector<int>> &queries) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> prefix(n,vector<int> (m,0));
        prefix[0][0]=mat[0][0];
        for(int i=1;i<m;i++){
            prefix[0][i]=mat[0][i]+prefix[0][i-1];
        }
        for(int i=1;i<n;i++){
            prefix[i][0]=mat[i][0]+prefix[i-1][0];
            for(int j=1;j<m;j++){
                prefix[i][j]=mat[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
            }
        }
        // for(auto i:prefix){
        //     for(auto j:i){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        vector<int> ans;
        // (r2,c2)-(r2,c1-1)-(r1-1,c2)-(r1-1,c1-1)
        for(auto i:queries){
            if(i[0]==0&&i[1]==0)
            ans.push_back(prefix[i[2]][i[3]]);
            else if(i[0]==0)
            ans.push_back(prefix[i[2]][i[3]]-prefix[i[2]][i[1]-1]);
            else if(i[0]==0)
            ans.push_back(prefix[i[2]][i[3]]-prefix[i[0]-1][i[3]]);
            else
            ans.push_back(prefix[i[2]][i[3]]-prefix[i[2]][i[1]-1]-prefix[i[0]-1][i[3]]+prefix[i[0]-1][i[1]-1]);
        }
        return ans;
    }
};
