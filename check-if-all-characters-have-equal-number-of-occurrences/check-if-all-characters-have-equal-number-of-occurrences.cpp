class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> map;
        
        for (auto& c : s){
            map[c]++;
        }
        
        int num = map[s[0]];
        for (auto iter = map.begin(); iter != map.end(); iter++){
            if (num != iter->second){
                return false;
            }
        }
        return true;
    }
};