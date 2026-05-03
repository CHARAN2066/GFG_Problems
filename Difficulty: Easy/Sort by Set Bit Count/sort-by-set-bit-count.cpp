class Solution {
  public:
    static long long int fun(long long int n){
        long long int a=0;
        while(n>0){
            a++;
            n=n&(n-1);
        }
        return a;
    }
    static bool cmp(const pair<long long int,long long int> &a, const pair<long long int,long long int> &b){
        if(a.first == b.first) 
        return false;
        return a.first > b.first; 
    }
    vector<int> sortBySetBitCount(vector<int>& arr) {
        vector<pair<long long int,long long int>> a;
        for(auto i:arr){
            a.push_back({fun(i),i});
        }
        stable_sort(a.begin(),a.end(),cmp);
        vector<int> ans;
        for(auto i:a){
            ans.push_back(i.second);
        }
        return ans;
    }
};