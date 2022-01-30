class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int depth = 0;
        
        for (char c: s) {
            if (c == '(') {
                if (depth > 0)
                    ans += '(';
                depth += 1;    
            } 
            else {
                depth -= 1;
                if (depth > 0)
                    ans += ')';
            }
        }
        return ans;
    }
};