class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool alpha[26] = {false, };
        
        for (auto& c : sentence){
            if (alpha[c - 'a'] == false){
                alpha[c - 'a'] = true;
            }
            continue;
        }
        
        for (auto& c : alpha){
            if (!c){
                return false;
            }
        }
        return true;
    }
};