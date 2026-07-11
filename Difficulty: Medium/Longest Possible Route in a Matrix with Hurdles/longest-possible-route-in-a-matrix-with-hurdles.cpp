
// User function Template for C++

class Solution {
  public:
    int helper(vector<vector<int>> &matrix,vector<vector<bool>> &visted,int i,int j,int n,int m,int xd,int yd)
    {
        if(i>=n||j>=m||i<0||j<0)
        return INT_MIN;
        if((matrix[i][j]==0)||(visted[i][j]))
        return INT_MIN;
        if(i==xd&&j==yd)
        return 0;
        visted[i][j]=true;
        int a=0,b=0,c=0,d=0;
        a=helper(matrix,visted,i+1,j,n,m,xd,yd);
        b=helper(matrix,visted,i,j+1,n,m,xd,yd);
        c=helper(matrix,visted,i-1,j,n,m,xd,yd);
        d=helper(matrix,visted,i,j-1,n,m,xd,yd);
        visted[i][j]=false;
        return 1+max({a,b,c,d});
    }
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<bool>> visted(n,vector<bool> (m,false));
        int ans=helper(matrix,visted,xs,ys,n,m,xd,yd);
        if(ans<0)
        return -1;
        else
        return ans;
    }
};

