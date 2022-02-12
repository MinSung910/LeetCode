class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string tmp = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                reverse(tmp.begin(), tmp.end());
                ans += tmp;
                tmp = "";
                ans += " ";
                continue;
            }
            else if (i == s.length() - 1) {
                tmp += s[i];
                reverse(tmp.begin(), tmp.end());
                ans += tmp;
                tmp = "";
                continue;
            }
            tmp += s[i];
        }
        return ans;
    }
};