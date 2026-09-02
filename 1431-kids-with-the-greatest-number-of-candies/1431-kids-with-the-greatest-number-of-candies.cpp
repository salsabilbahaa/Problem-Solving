class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n, false);
        int mx = 0;
        for(int i = 0; i < n; i++){
            mx = max(candies[i], mx);
        }
        for(int i = 0; i < n; i++){
            if(candies[i] + extraCandies >= mx){
                result[i] = true;
            }
        }
        return result;
    }
};