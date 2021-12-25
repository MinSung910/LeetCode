class Solution {
public:
	int minAddToMakeValid(string s) {
		stack<char> stack;

		for (auto& c : s) {
			if (stack.empty()) {
				stack.push(c);
			}
			else {
				if (stack.top() == '(' && c == ')') {
					stack.pop();
				}
				else {
					stack.push(c);
				}
			}
		}
		return stack.size();
	}
};