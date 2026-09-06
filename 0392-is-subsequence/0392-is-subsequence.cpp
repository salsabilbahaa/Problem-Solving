class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size(), idx = 0;
        for (char c : t){
            if (c == s[idx]){
                idx++;
            }
            if (idx == n){
                return true;
            }
        }
        if (s.empty()){
            return true;
        }
        return false;
    }
};