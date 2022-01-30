class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> keyboard(26, true);
        int ans = 0;
        
        for (auto& c : brokenLetters) keyboard[c - 'a'] = false;
        
        bool flag = true;
        for (char& t : text) {
            if (t == ' ') {
                if (flag) ans++;
                flag = true;
                continue;
            }
            if (!keyboard[t - 'a']) {
                flag = false;
            }
        }
        if (flag) ans++;
        return ans;
    }
};