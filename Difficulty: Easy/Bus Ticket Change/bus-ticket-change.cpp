class Solution {
  public:
    bool canServe(vector<int> &arr) {
        int f=0,t=0,tw=0;
        for(auto i:arr){
            if(i==5)
            {
                f++;
                continue;
            }
            else if(i==10){
                if(f>=1)
                {
                    t++;
                    f--;
                    continue;
                }
                else{
                    return false;
                }
            }
            else{
                tw++;
                if(f>=1&&t>=1){
                    f--;
                    t--;
                }
                else if(f>=3){
                    f-=3;
                }
                else{
                    return false;
                }
                
            }
        }
        return true;
    }
};