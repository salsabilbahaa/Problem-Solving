class Solution {
public:
    int distinctSubseqII(string s) {
        int n = s.size();
        int MOD = 1e9 + 7;
        vector<int> dp(n+1), last(26, -1);
        dp[0] = 1;

        for (int i = 0; i < n; i++){
            dp[i+1] = dp[i] * 2 % MOD;
            int c = s[i] - 'a';
            if (~last[c]){
                dp[i+1] -= dp[last[c]];
            }
            dp[i+1] %= MOD;
            if(dp[i+1] < 0){
                dp[i+1] += MOD;
            }
            last[c] = i;
        }
        dp[n]--;
        if(dp[n] < 0){
            dp[n] += MOD;
        }
        return dp[n];
    }
};