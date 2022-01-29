class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stack;
        
        for (int i = 0; i < s.length(); i++) {
            if (!stack.empty() && s[i] == ')' && stack.top() == '(') {
                stack.pop();
                continue;
            }
            stack.push(s[i]);
        }
        return stack.size();
    }
};