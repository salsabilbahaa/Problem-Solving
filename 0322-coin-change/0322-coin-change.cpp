class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<long long> dp(amount+1, LLONG_MAX);
        dp[0] = 0;
        for (int i = 1; i < amount + 1; i++){
            for (int j : coins){
                if (j <= i && dp[i-j] < LLONG_MAX)
                dp[i] = min(dp[i], dp[i - j] + 1);
            }
        }
        if (dp[amount] == LLONG_MAX) 
            return -1;
        return dp[amount];
    }
};