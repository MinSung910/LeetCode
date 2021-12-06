class Solution {
public:
	bool isValid(string str) {
		stack<char> s;

		for (auto& c : str) {
			if (!s.empty()) {
				if (c == ')' && s.top() == '(') {
					s.pop();
				}
				else if (c == ']' && s.top() == '[') {
					s.pop();
				}
				else if (c == '}' && s.top() == '{') {
					s.pop();
				}
				else {
					s.push(c);
				}
			}
			else {
				s.push(c);
			}
		}
		if (s.empty()) {
			return true;
		}
		else {
			return false;
		}
	}
};