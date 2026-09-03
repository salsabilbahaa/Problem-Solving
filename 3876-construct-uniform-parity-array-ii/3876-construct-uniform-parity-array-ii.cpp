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
        bool can = 1;
        for (int i = 0; i < nums1.size(); i++){
            can &= !(nums1[i] & 1);
        }
        return can;
    }
};