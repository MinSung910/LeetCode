
class Solution {
public:
	int maxDepth(string line) {
		stack<char> s;
		int maxD = 0;

		for (int i = 0; i < line.length(); i++) {
			if (line[i] == '(') {
				s.push(line[i]);
				maxD = maxD < s.size() ? s.size() : maxD;
			}
			else if (line[i] == ')') {
				if (s.top() == '(') s.pop();
			}
		}
		return maxD;
	}
};