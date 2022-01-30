class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int, int> map;
        
        for (auto& re : rectangles) {
            map[min(re[0], re[1])]++;
        }
        
        int num = INT_MIN;
        for (auto it = map.begin(); it != map.end(); it++) {
            num = max(it->first, num);
        }
        return map[num];
    }
};