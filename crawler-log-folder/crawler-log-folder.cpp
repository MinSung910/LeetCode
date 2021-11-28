class Solution {
public:
	int minOperations(vector<string>& logs) {
		stack<string> s;

		int i = 0;
		while (i < logs.size()) {
			if (logs[i] == "../") {
				if (!s.empty()) {
					s.pop();
				}
				i++;
			}
			else if (logs[i] == "./") {
				i++;
				continue;
			}
			else {
				s.push(logs[i]);
				i++;
			}
		}
		int ans = s.size();

		while (!s.empty()) {
			s.pop();
		}
		return ans;
	}
};