class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = 1e9;
        for (int i : nums1){
             mn = min(mn, i);
        }
        if (mn & 1){
            return true;
        }
        for (int i : nums1){
            if (i & 1){
                return false;
            }
        }
        return true;
    }
};