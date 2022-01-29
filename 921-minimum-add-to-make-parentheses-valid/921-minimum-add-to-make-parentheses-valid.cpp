class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = s.length();
        
        for (int i = 1; i < s.length();) {
            if (s[i - 1] == '(' && s[i] == ')') {
                s.erase(i - 1, 2);
                ans -= 2;
                i = 1;
                continue;
            }
            i++;
        }
        return ans;
    }
};