class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int left = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                left++;
                if (left == 1) continue;
                else ans += s[i];
            }    
            else {
                left--;
                if (left == 0) continue;
                else ans += s[i];
            }
        }
        
        return ans;
    }
};