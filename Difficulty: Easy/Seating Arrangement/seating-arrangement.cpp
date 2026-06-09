class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        int n=seats.size(),z=0;
        for(int i=0;i<n-1;i++){
            if(seats[i]==1&&seats[i+1]==1)
            return false;
        }
        for(int i=0;i<n;i++){
            if(seats[i]==1)
            continue;
            if(i==0){
                if(seats[i+1]==0)
                {
                    seats[i]=1;
                    z++;
                }
            }
            else if(i==n-1){
                if(seats[i-1]==0)
                {
                    seats[i]=1;
                    z++;
                }
            }
            else if(seats[i]==0&&seats[i-1]==0&&seats[i+1]==0)
            {
                seats[i]=1;
                z++;
            }
        }
        return z>=k;
    }
};