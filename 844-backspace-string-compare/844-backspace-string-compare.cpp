class Solution {
public:
	string removeBackspace(string s) {
		stack<char> stack;
		for (int i = 0; i < s.length(); i++) {
			if (stack.empty()) {
				if (s[i] != '#') stack.push(s[i]);
				else continue;
			}
			else {
				if (s[i] == '#') stack.pop();
				else stack.push(s[i]);
			}
		}

		string ans = "";
		while (!stack.empty()) {
			ans += stack.top();
			stack.pop();
		}
		return ans;
	}
	bool backspaceCompare(string s, string t) {
		cout << removeBackspace(s) << endl;
		cout << removeBackspace(t) << endl;

		return removeBackspace(s) == removeBackspace(t);
	}
};