class Solution {
public:
    int heightChecker(vector<int>& heights) {
        map<int, int> map;
        vector<int> tmp;
        
        for (auto& h : heights) {
            map[h]++;
        }
        
        for (auto it = map.begin(); it != map.end(); it++) {
            for (int i = 0; i < it->second; i++) {
                tmp.push_back(it->first);
            }
        }
        
        int ans = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != tmp[i]) ans++;
        }
        
        return ans;
    }
};