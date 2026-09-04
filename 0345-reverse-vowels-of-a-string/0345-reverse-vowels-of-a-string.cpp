class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i');
    }
    string reverseVowels(string s) {
        stack<char> st;
        for (char c : s){
            if (isVowel(c)){
                st.push(c);
            }
        }
        string ans;
        for (char c : s){
            if(isVowel(c)){
                ans += st.top();
                st.pop();
            }
            else {
                ans += c;
            }
        }
        return ans;
    }
};