class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> alpha(26, false);
        int ans = 0;
        
        for (char& allow : allowed) {
            alpha[allow - 'a'] = true;
        }
        
        for (string& word : words) {
            bool flag = true;
            for (int i = 0; i < word.length(); i++){
                if (!alpha[word[i] - 'a']){
                    flag = false;
                    break;
                }
            }
            if (flag) ans++;
        }
        return ans;
    }
};