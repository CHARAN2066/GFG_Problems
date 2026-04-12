class Solution {
  public:
    bool isToeplitz(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size(),a,b;
        for(int i=0;i<m;i++){
            a=0,b=i;
            while(a<n&&b<m){
                if(mat[a][b]!=mat[0][i]){
                    return false;
                }
                a++;
                b++;
            }
        }
        for(int i=0;i<n;i++){
            a=i,b=0;
            while(a<n&&b<m){
                if(mat[a][b]!=mat[i][0]){
                    return false;
                }
                a++;
                b++;
            }
        }
        return true;
    }
};