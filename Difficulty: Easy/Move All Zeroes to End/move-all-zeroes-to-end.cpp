class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int z=0,i=0;
        while(i<arr.size()){
            if(arr[i]==0){
                arr.erase(arr.begin()+i);
                z++;
            }
            else
            i++;
        }
        for(int i=0;i<z;i++){
            arr.push_back(0);
        }
    }
};