class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> alpha(26, 0);
        int ans = 0;
        
        for (int i = 0; i < chars.length(); i++) {
            alpha[chars[i] - 'a']++;
        }
        
        for (string& word : words) {
            bool flag = true;
            vector<int> tmp(26, 0);
            
            for (int i = 0; i < word.length(); i++) {
                tmp[word[i] - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                if (alpha[i] < tmp[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) ans += word.length();
        }
        return ans;
    }
};