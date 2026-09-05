class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string cur, ans;
        for (char c : s){
            if (c == ' '){
                if (!cur.empty()){
                     st.push(cur);
                }
                cur = "";
            }
            else {
                cur += c;
            }
        }
        if (!cur.empty()){
            st.push(cur);
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
            if (!st.empty()){
                ans += ' ';
            }
        }
        return ans;
    }
};