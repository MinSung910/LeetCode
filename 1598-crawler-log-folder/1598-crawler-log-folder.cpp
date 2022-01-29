class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<string> v;
        
        for (string& log : logs) {
            if (log.compare("./") == 0){
                continue;
            }
            else if (log.compare("../") == 0) {
                if (v.size() > 0) v.pop_back();
                continue;
            }
            else {
                v.push_back(log);
            }
        }
        
        return v.size();
    }
};