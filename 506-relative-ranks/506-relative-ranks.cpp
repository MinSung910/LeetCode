bool cmp(const int& a, const int& b) {
	return a > b;
}
class Solution {
public:
	vector<string> findRelativeRanks(vector<int>& score) {
		vector<string> ans;
		unordered_map<int, string> map;
		vector<int> tmp = score;
		int idx = 0;

		sort(tmp.begin(), tmp.end(), cmp);
		while (idx < tmp.size()) {
			string s = "";
			if (idx == 0) {
				s = "Gold Medal";
			}
			else if (idx == 1) {
				s = "Silver Medal";
			}
			else if (idx == 2) {
				s = "Bronze Medal";
			}
			else {
				s = to_string(idx + 1);
			}
			map.insert({ tmp[idx], s });
			idx++;
		}

		for (auto& s : score) {
			ans.push_back(map[s]);
		}
		return ans;
	}
};