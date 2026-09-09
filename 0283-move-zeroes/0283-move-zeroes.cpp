class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr = 0, n = nums.size(), ptr2 = 0, cnt = 0;
        if (n == 1) return;
        while (ptr < n && nums[ptr] != 0) ptr++;
        while(ptr2 < n && ptr < n){
            if (nums[ptr2] == 0) ptr2++, cnt++;
            else{
                if (ptr2 > ptr) {
                    nums[ptr] = nums[ptr2];
                    ptr++;
                }
                ptr2++;
            }
        }
        for (int i = 0; i < cnt; i++){
            nums[n-1-i] = 0;
        }
    }
};