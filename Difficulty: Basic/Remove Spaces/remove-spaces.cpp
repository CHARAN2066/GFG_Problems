class Solution {
  public:
    string removeSpaces(string& s) {
        string ans;
        for(auto i:s){
            if(i==' ')
            continue;
            else
            ans.push_back(i);
        }
        return ans;
    }
};