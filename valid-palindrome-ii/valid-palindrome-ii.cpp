class Solution {
public:
    bool oneDeletePalindrome(string &s, int start, int end, bool isDelete){
        if (start > end){
            return true;
        }
        if (s[start] == s[end]){
            return oneDeletePalindrome(s, start + 1, end - 1, isDelete);
        }
        if (s[start] != s[end]){
            if (isDelete){
                return false;
            }
            else{
                return oneDeletePalindrome(s, start + 1, end, true) || oneDeletePalindrome(s, start, end - 1, true);
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        return oneDeletePalindrome(s, 0, s.length() - 1, false);
    }
};