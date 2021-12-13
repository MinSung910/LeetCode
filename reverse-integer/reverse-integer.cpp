class Solution {
public:
	int reverse(int x) {
		string s = to_string(x);

		int zeroCnt = 0;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '0') {
                zeroCnt++;
            }
            break;
        }

		bool minus = false;
		long long ans = 0;

		//minus
		if (s[0] == '-') {
			minus = true;
			for (int i = s.length() - 1 - zeroCnt; i > 0; i--) {
				ans *= 10;
				ans = ans + s[i] - '0';
			}
		}
		else {
			for (int i = s.length() - 1 - zeroCnt; i >= 0; i--) {
				ans *= 10;
				ans = ans + s[i] - '0';
			}
		}
        if (ans > INT_MAX) {
            return 0;
        }
		return minus == true ? -ans : ans;
	}
};