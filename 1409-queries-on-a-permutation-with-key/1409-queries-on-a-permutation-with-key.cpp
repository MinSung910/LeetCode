class Solution {
public:
	vector<int> processQueries(vector<int>& queries, int m) {
		vector<int> ans;

		vector<int> prev;
		for (int i = 1; i <= m; i++) {
			prev.push_back(i);
		}

		for (int& query : queries) {
			vector<int> tmp;
			
			int i;
			for (i = 0; i < m; i++) {
				if (query == prev[i]) break;
			}

			ans.push_back(i);
			tmp.push_back(prev[i]);
			for (int j = 0; j < m; j++) {
				if (j == i) continue;
				tmp.push_back(prev[j]);
			}
			prev = tmp;
		}
		return ans;
	}
};