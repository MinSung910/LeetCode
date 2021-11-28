class Solution {
public:
	int calPoints(vector<string>& ops) {
		stack<int> s;
		
		int i = 0;
		while (i < ops.size()) {
			if (ops[i] == "C") {
				s.pop();
			}
			else if (ops[i] == "D") {
				int num = s.top();
				num *= 2;
				s.push(num);
			}
			else if (ops[i] == "+") {
				int num = s.top();
				s.pop();
				int sum = num + s.top();
				s.push(num);
				s.push(sum);
			}
			else {
				s.push(stoi(ops[i]));
			}
			i++;
		}
		int ans = 0;
		while (!s.empty()) {
			ans += s.top();
			s.pop();
		}
		return ans;
	}
};