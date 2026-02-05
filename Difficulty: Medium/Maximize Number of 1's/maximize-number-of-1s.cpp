class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        int z=0,l=0,n=arr.size(),ans=0;
        for(int end=0;end<n;end++){
            if(arr[end]==0)
            z++;
            while(z>k){
                if(arr[l]==0)
                z--;
                l++;
            }
            ans=max(ans,(end-l+1));
        }
        return ans;
    }
};
