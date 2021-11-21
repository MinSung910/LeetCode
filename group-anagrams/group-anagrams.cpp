class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>> map;
		vector<vector<string>> ans;

		for (auto& str : strs) {
			string s = str;
			sort(str.begin(), str.end());
			map[str].push_back(s);
		}

		for (auto iter = map.begin(); iter != map.end(); iter++) {
			vector<string> tmp;
			for (int i = 0; i < iter->second.size(); i++) {
				tmp.push_back(iter->second[i]);
			}
			ans.push_back(tmp);
		}
		return ans;
	}
};
