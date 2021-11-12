class Solution {
public:
    string toLowerCase(string s) {
        for (auto& c : s){
            if (c >= 'A' && c <= 'Z'){
                c -= 'A' -'a';
            }
        }
        return s;
    }
};