class Solution {
  public:
    void helper(vector<vector<int>> &maze,int n,int i,int j,string temp,vector<string> &ans,vector<vector<bool>> &visted)
    {
        if(i<0||j<0||i>=n||j>=n)
        return;
        if(visted[i][j])
        return;
        if(maze[i][j]==0)
        return;
        if(i==n-1&&j==n-1)
        {
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        visted[i][j]=true;
        temp.push_back('D');
        helper(maze,n,i+1,j,temp,ans,visted);
        temp.pop_back();
        temp.push_back('L');
        helper(maze,n,i,j-1,temp,ans,visted);
        temp.pop_back();
        temp.push_back('R');
        helper(maze,n,i,j+1,temp,ans,visted);
        temp.pop_back();
        temp.push_back('U');
        helper(maze,n,i-1,j,temp,ans,visted);
        visted[i][j]=false;
        return;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size();
        vector<string> ans;
        string temp;
        vector<vector<bool>> visted(n,vector<bool> (n,false));
        helper(maze,n,0,0,temp,ans,visted);
        return ans;
        
    }
};