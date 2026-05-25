class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        int c=0;
        for(auto i:arr){
            if(i>=start&&i<=end)
            c++;
        }
        if(c==(end-start+1)) return true;
        return false;
    }
};
