class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n=arr.size(),l=0,h=n-1;
        while(l<h){
            if(arr[l]==1){
                swap(arr[l],arr[h]);
                h--;
            }
            else{
                l++;
            }
            if(arr[h]==0){
                swap(arr[l],arr[h]);
                l++;
            }
            else{
                h--;
            }
        }
        
    }
};