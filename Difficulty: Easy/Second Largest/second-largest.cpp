// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int m=-1;
        for(auto i:arr)
        {
            m=max(i,m);
        }
        int ans=-1;
        for(auto i:arr)
        {
            if(i!=m)
            ans=max(ans,i);
        }
        return ans;
    }
};
