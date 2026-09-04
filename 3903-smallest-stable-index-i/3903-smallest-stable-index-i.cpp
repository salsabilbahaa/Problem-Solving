class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sufMn(n+1, 1e9);
        for (int i = n-1; i >= 0; i--){
            sufMn[i] = min(nums[i], sufMn[i+1]);
        }
        int mx = nums[0];
        for (int i = 0; i < n; i++){
            mx = max(mx, nums[i]);
            int s = mx - sufMn[i];
            if (s <= k){
                return i;
            }
        }
        return -1;
    }
};