bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first <  b.first;
}
class Solution {
public:
	vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
		vector<pair<int, int>> ans;
		vector<int> res;

		int row = mat.size();
		int col = mat[0].size();

		for (int i = 0; i < row; i++) {
			int j;
			for (j = 0; j < col; j++) {
				if (mat[i][j] == 0) break;
			}
			ans.push_back({ j, i });
		}

		sort(ans.begin(), ans.end(), cmp);
		for (int i = 0; i < k; i++) {
			res.push_back(ans[i].second);
		}

		return res;
	}
};