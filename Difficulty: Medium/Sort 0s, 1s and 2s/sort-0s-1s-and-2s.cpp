class Solution {
  public:
    void sort012(vector<int>& arr) {
       int n=arr.size();
       int z=0,o=0,t=n-1;
       while(o>=z&&o<=t)
       {
           if(arr[o]==1)
           o++;
           else if(arr[o]==0)
           {
               swap(arr[o],arr[z]);
                o++;
               z++;
           }
           else if(arr[o]==2)
           {
               swap(arr[o],arr[t]);
            //   o++;
               t--;
           }
       }
    }
};

