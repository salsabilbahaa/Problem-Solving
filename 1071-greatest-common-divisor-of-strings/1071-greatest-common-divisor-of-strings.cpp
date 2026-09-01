class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1.size() < str2.size()) {
            swap(str1, str2);
        }
        vector<string> possible;
        string cur;
        for (int i = 0; i < str2.size(); i++){
            cur += str2[i];
            string tot = cur;
            while(tot.size() < str2.size()){
                tot += cur;
            }
            if(tot == str2){
                possible.push_back(cur);
            }
        }
        string ans;
        for (string p : possible){
            string tot = p;
            while (tot.size() < str1.size()){
                tot += p;
            }
            if(tot == str1){
                ans = p;
            }
        }
        return ans;
    }
};