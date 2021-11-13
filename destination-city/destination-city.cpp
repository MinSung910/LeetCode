class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> map;
        
        for (auto& path : paths){
            map.insert({path[0], path[1]});
        }
        
        string cur = paths[0][0];
        
        while(1){
            if (map.find(cur) == map.end()){
                break;
            }
            cur = map[cur];
        }
        return cur;
    }
};