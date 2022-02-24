bool cmp(const pair<char,int>& a, const pair<char,int>& b) {
    if (a.second == b.second) return a.first > b.first;
	return a.second > b.second;
}
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        string ans = "";
        
        for (auto& c : s) {
            if (map.find(c) == map.end()) {
                map.insert({c, 1});
            }
            else {
                map[c]++;
            }
        }
        
        vector<pair<char,int>> vec( map.begin(), map.end() );
        sort(vec.begin(), vec.end(), cmp);
        
        for (auto it = vec.begin(); it != vec.end(); it++) {
            for (int i = 0; i < it->second; i++) {
                ans += it->first;
            }
        }
        return ans;
    }
};