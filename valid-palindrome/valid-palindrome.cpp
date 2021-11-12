class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        
        for (auto& c : s){
            if(isalnum(c) == 0){
                continue;
            }
            str += tolower(c);    
        }
        
        int i = 0;
        int j = str.length() - 1;
        
        while(i < j){
            if (str[i] != str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};