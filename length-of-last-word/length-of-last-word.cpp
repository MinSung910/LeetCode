class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int len = 0;
        bool flag = false;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                flag = true;
                len++;
            }
            else {
                if (flag) {
                    break;
                }
                continue;
            }
        }
        return len;
    }
};