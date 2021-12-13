class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tSize = t.length();
        int i = 0, j = 0; //s, t
    
        while (j < tSize) {
            if (t[j] == s[i]) {
                i++;
            }
            j++;
        }
        
       return i == s.length() ? true : false;
    }
};