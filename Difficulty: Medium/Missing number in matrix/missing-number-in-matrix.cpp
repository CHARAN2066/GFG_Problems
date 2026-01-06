class Solution {
  public:
    long long int MissingNo(vector<vector<int> >& mat) {
        // Code here
        long long int n=mat.size(),s=0;
        vector<vector<long long int>> matrix(n);
        for(int i=0;i<n;i++){
            for(auto j:mat[i])
            matrix[i].push_back(j);
        }
        long long int ans1=0,id1=-1,id2=-1;
        long long int ans=0;
        long long int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            bool flag=false;
                 s=0;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0){
                {
                    id1=i;
                    id2=j;
                    flag=true;
                    
                }
                   
                }
                s=(s+matrix[i][j]);
            }
            if(flag){
            ans=s;
               
            }
            if(!flag)
            ans1=s;
            
        }
        long long int res=ans1-ans;
        matrix[id1][id2]=res;
        // cout<<res<<endl;
        // cout<<res;
        // for(auto i:matrix){
        //     for(auto j:i){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        long long int m=matrix[0].size();
        long long int c=0,prev=-1;
        s=0;
        for(int i=0;i<m;i++){
            s=0;
            for(int j=0;j<n;j++){
                s=(s+matrix[j][i]);
            }
            if(prev!=-1){
                if(prev!=s){
                    return -1;
                }
            }
            prev=s;
        }
        long long int r=s;
        s=0,prev=-1;
        for(int i=0;i<n;i++){
            s=0;
            for(int j=0;j<m;j++){
                s=(s+matrix[i][j]);
            }
            if(prev!=-1){
                if(prev!=s){
                    return -1;
                }
            }
            // cout<<s<<endl;
            prev=s;
        }
        
        long long int col=s;
        long long int d1=0,d2=0;
        for(int i=0;i<n;i++){
            d1=(d1+matrix[i][i]);
            d2=(d2+matrix[i][n-1-i]);
        }
        if(d1!=d2)
        return -1;
        if(r==col&& col==d1)
        return res<=0?-1:(res);
        return -1;
        // return ans1-ans;
       
    }
};