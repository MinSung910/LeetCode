class Solution {
public:
    string truncateSentence(string s, int k) {
        int cnt = 0;
        string str;
        for (auto& c : s){
            if (c == ' '){
                cnt++;        
            }
            if (cnt == k){
                break;
            }
            str += c;
        }
        return str;
    }
};