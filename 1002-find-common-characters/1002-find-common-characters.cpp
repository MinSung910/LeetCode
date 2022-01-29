class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> alpha(26, 0);
        vector<string> ans;
        
        for (int i = 0; i < words[0].length(); i++) {
            alpha[words[0][i] - 'a']++;    
        }
        
        for (int i = 1; i < words.size(); i++) {
            vector<int> cmp(26, 0);
            for (int j = 0; j < words[i].length(); j++) {
                cmp[words[i][j] - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                alpha[i] = min(alpha[i], cmp[i]);
            }
        }
        
        for (int i = 0; i < 26; i++) {
            if (alpha[i] >= 1) {
                string s = "";
                for (int j = 0; j < alpha[i]; j++) {
                    s = i + 'a';
                    ans.push_back(s);
                }
            }
        }
        
        return ans;
    }
};