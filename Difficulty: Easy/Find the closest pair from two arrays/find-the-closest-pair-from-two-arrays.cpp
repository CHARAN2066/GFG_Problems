class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        int l,m,h,t,ans1,ans2,n=arr1.size(),n2=arr2.size(),i=0,j=0,res=INT_MAX,a,res1,res2;
        for(int i=0;i<n;i++){
            t=x-arr1[i];
            l=0,h=n2-1;
            ans1=-1,ans2=-1;
            while(l<=h){
                m=(l+h)/2;
                if(arr2[m]<=t){
                    ans1=arr2[m];
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
            l=0,h=n2-1;
            while(l<=h){
                m=(l+h)/2;
                if(arr2[m]>t){
                    ans2=arr2[m];
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
            if(ans1!=-1)
            {
                a=abs(x-(arr1[i]+ans1));
                if(res>a) 
                {
                    res=a;
                    res1=arr1[i];
                    res2=ans1;
                }
            }
            if(ans2!=-1)
            {
                a=abs(x-(arr1[i]+ans2));
                if(res>a) 
                {
                    res=a;
                    res1=arr1[i];
                    res2=ans2;
                }
            }
        }
        return {res1,res2};
        
    }
};