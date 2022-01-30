class Solution {
public:
    string removeDuplicates(string s) {
        int cur = 1;
        
        while(cur < s.length()) {
            if (s[cur - 1] == s[cur]) {
                s.erase(cur - 1, 2);
                cur = cur - 1 > 0 ? cur-=1 : cur = 1;
                continue;
            }
            cur++;
        }
        return s;
    }
};