class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0, left = 0;
        
        for (char& c : s) {
            if (c == ')') {
                if (left == 0) {
                    ans++;
                }
                else {
                    left--;
                    ans--;
                }
            }
            else if (c == '(') {
                left++;
                ans++;
            }
        }
        return ans;
    }
};