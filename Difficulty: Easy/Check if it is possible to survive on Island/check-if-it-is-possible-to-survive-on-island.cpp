// User function Template for C++

class Solution {
  public:
    int minimumDays(int S, int N, int M) {
        double s=static_cast<double>(S);
        double n=static_cast<double>(N);
        double m=static_cast<double>(M);
        if(m>n)
        return -1;
        if((n*6<m*7)&&(s>6))
        return -1;
        return ceil((s*m)/n);
        
    }
};