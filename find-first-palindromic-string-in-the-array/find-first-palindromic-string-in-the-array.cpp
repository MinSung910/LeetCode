class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for (auto& word: words) {
            int len = word.length();
            bool flag = true;
            
            for (int i = 0; i < len / 2; i++) {
                if (word[i] != word[len - 1 - i]){
                    flag = false;        
                }
            }
            
            if (flag) {
                return word;
            }
        }
        return "";
    }
};