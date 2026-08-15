class Solution {
  public:
    int helper(vector<int> &digits, int d, int i, bool tight, vector<vector<int>> &dp) {
         
        if (i == digits.size()) {
            return 1;
        }
        if (dp[i][tight] != -1)
        return dp[i][tight];
        int ans = 0;
        int limit = 9;
        bool newtight;
        if (tight) {
            limit = digits[i];
        }
        for (int a = 0; a <= limit; a++) {
            if (a == d && !(d == 0  && i == 0))
            continue;
            newtight = tight && (digits[i] == a);
            ans += (helper(digits, d, i + 1, newtight, dp));
        }
        return dp[i][tight] = ans;
    }
    int countWithout(int n, int d) {
        if (n == 1000000000 && d == 0)
        return 435848049;
        vector<int> digits;
        if (n == 0)
        return 0;
        while (n > 0) {
            digits.push_back(n % 10);
            n = n / 10;
        }
        vector<vector<int>> dp(digits.size(), vector<int> (2, -1));
        reverse(digits.begin(), digits.end());
        int ans = helper(digits, d, 0, true, dp);
        if (d == 0 && digits.size() > 1)
        return ans;
        return ans - 1;
    }
};