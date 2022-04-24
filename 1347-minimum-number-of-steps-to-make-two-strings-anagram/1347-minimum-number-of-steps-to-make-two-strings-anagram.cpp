class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> alpha(26, 0);
        int ans = 0;
        
        for (auto& c : s) {
            alpha[c - 'a']++;
        }
        for (auto& c: t) {
            alpha[c - 'a']--;
        }
        
        for (int i = 0; i < 26; i++) {
            if (alpha[i] > 0) ans += alpha[i];    
        }
        return ans;
    }
};