class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        int n = chars.size(), cur = 0;
        char ch = '*';
        for (int i = 0; i < n; i++){
            if (chars[i] != ch){
                if (cur > 1){
                    s += to_string(cur);
                }
                ch = chars[i];
                s += ch;
                cur = 0;
            }
            cur++;
        }
        if (cur > 1){
            s += to_string(cur);
        }
        for (int i = 0; i < s.size(); i++){
            chars[i] = s[i];
        }
        return s.size();
    }
};