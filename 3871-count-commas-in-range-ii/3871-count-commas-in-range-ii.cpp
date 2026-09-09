class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        if (n < 1000) return ans;
        ans += (n-1000) + 1;
        if (n < 1000000) return ans; 
        ans += (n-1000000) + 1;
        if (n < 1e9) return ans; 
        ans += (n-1e9) + 1;
        if (n < 1e12) return ans; 
        ans += (n-1e12) + 1;
        if (n < 1e15) return ans; 
        ans += 1;
        return ans;
    }
};