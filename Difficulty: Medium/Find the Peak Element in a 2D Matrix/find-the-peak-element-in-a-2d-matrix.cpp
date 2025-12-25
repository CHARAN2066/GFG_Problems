class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        bool flag=true;
        // cout<<" charan"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                flag=true;
                if(i!=0&&arr[i][j]<arr[i-1][j]){
                    flag=false;
                }
                if(j!=0&&arr[i][j]<arr[i][j-1]){
                    flag=false;
                }
                if(i!=n-1&&arr[i][j]<arr[i+1][j]){
                    flag=false;
                }
                if(j!=m-1&&arr[i][j]<arr[i][j+1]){
                    flag=false;
                }
                if(flag)
                {
                    // cout<<i<<" "<<j<<endl;
                    return {i,j};
                }
            }
        }
    return {-1,-1};
    }
};
