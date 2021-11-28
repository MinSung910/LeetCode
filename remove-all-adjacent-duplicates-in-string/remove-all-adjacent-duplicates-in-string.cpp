
class Solution {
public:
	string removeDuplicates(string s) {
		int i = 0;

		while (i < s.length()) {
			if (s[i] == s[i + 1]) {
				s = s.erase(i, 2);
				if (i > 0) {
					i--;
				}
				else {
					i == 0;
				}
			}
			else {
				i++;
			}
		}
		return s;
	}
};