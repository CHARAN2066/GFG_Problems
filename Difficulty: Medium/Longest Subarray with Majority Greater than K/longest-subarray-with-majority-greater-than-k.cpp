class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
       int s=0,ans=0,n=arr.size();
       map<int,int> mp;
    //   mp[0]=1;
       for(int i=0;i<n;i++){
           if(arr[i]>k)
           s++;
           else
           s--;
           if(s>0){
            //   cout<<i<<endl;
               ans=max(ans,(i+1));
           }
           else if(mp.find(s-1)!=mp.end())
           {
               ans=max(ans,(i-mp[s-1]));
           }
           if(mp.find(s)==mp.end()){
               mp[s]=i;
           }
       }
       return ans;
    }
};