class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> set;
        int ans = 0;
        
        for (auto& c : allowed){
            set.insert(c);
        }
        
        for (auto& word : words){
            bool flag = true;
            for (auto& c : word){
                if (set.find(c) == set.end()){
                    flag = false;
                }
            }
            if (flag == true){
                ans++;
            }
        }
        return ans;
    }
};