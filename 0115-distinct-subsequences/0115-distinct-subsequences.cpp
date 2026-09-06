class Solution {
public:
    int numDistinct(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
        function<int(int, int)> go = [&](int idx1, int idx2) -> int{
            if (idx2 == n2){
                return 1;
            }
            if (idx1 == n1){
                return 0;
            }
            if (~dp[idx1][idx2]){
                return dp[idx1][idx2];
            }
            int ans = 0;
            // take
            if (s1[idx1] == s2[idx2]){
                ans += go(idx1 + 1, idx2 + 1);
            } 
            // leave
            ans += go(idx1 + 1, idx2);
            return dp[idx1][idx2] = ans;
        };
        return go(0, 0);
    }
};