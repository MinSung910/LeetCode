class Solution {
public:
	int countPoints(string rings) {
		vector<vector<int>> v(10, vector <int>(3, 0));
		int color;
		int number;
		int ans = 0;

		for (int i = 0; i < rings.length(); i += 2) {
			if (rings[i] == 'R') {
				color = 0;
			}
			else if (rings[i] == 'G') {
				color = 1;
			}
			else {
				color = 2;
			}
			number = rings[i + 1] - '0';
			v[number][color]++;
		}

		for (int i = 0; i <= 9; i++) {
			if (v[i][0] && v[i][1] && v[i][2]) {
				ans++;
			}
		}
		return ans;
	}
};