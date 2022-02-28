class Solution {
public:
	vector<string> subdomainVisits(vector<string>& cpdomains) {
		vector<string> ans;
		unordered_map<string, int> map;

        for (auto& c : cpdomains) {
            string num = "";
            int n;
            for (int i = 0; i < c.length(); i++) {
                if (c[i] >= '0' && c[i] <= '9') num += c[i];
                if (c[i] == ' ') {
                    n = stoi(num);
                    string sub = c.substr(i + 1);
                    if (map.find(sub) == map.end()) map.insert({ sub, n });
                    else map[sub] += n;
                }
                else if (c[i] == '.') {
                    string sub = c.substr(i + 1);
                    if (map.find(sub) == map.end()) map.insert({ sub, n });
                    else map[sub] += n;
                }
            }
		}
		for (auto it = map.begin(); it != map.end(); it++) {
			string s = to_string(it->second) + " " + it->first;
			ans.push_back(s);
		}
		return ans;
	}
};