class Solution {
public:
    string sortString(string s) {
		vector<int> alpha(26, 0);
		string res = "";

		for (auto& c : s) {
			alpha[c - 'a']++;
		}

        int cnt = 0;
        
		while (cnt < s.length()) {
			for (int i = 0; i < 26; i++) {
				if (alpha[i] > 0) {
					res += i + 'a';
					alpha[i]--;
                    cnt++;
				}
			}
			for (int i = 25; i >= 0; i--) {
				if (alpha[i] > 0) {
					res += i + 'a';
					alpha[i]--;
                    cnt++;
				}
			}
		}
		return res;
	}
};