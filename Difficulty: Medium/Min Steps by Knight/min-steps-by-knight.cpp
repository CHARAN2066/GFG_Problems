class Solution {
  public:
    int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
        queue<pair<int,int>> q;
        q.push({knightPos[0], knightPos[1]});
        int a, b, s, ans = 0;
        vector<vector<int>> visted(n + 1, vector<int>(n + 1, 0));
        
        vector<int> two = {-2, 2};
        vector<int> one = {-1, 1};

        visted[knightPos[0]][knightPos[1]] = 1;
        while (!q.empty()) {
            s = q.size();
            for (int l = 0; l < s; l++) {
                a = q.front().first;
                b = q.front().second;
                
                q.pop();
                
                
                
                if (a == targetPos[0] && b == targetPos[1])
                return ans;
                
                for (auto i : two) {
                    for (auto j : one) {
                        if (a + i>= n + 1 || b + j >= n + 1 || a + i < 0 || b + j < 0)
                        continue;
                        if (visted[a + i][b + j])
                        continue;
                        q.push({a + i, b + j});
                        visted[a + i][b + j] = 1;
                    }
                }        
                
                for (auto i : one) {
                    for (auto j : two) {
                        if (a + i>= n + 1 || b + j >= n + 1 || a + i < 0 || b + j < 0)
                        continue;
                        if (visted[a + i][b + j])
                        continue;
                        q.push({a + i, b + j});
                        visted[a + i][b + j] = 1;
                    }
                }
            }
            ans++;
        }
        return ans;
    }
};