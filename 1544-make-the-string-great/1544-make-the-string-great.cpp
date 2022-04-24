class Solution {
public:
    string makeGood(string str) {
        stack<char>s;
        string ans = "";
        
        for (int i = str.length() - 1; i >= 0; i--) {
            if (s.empty()) s.push(str[i]);
            else {
                if (abs(str[i] - s.top()) == 'a' - 'A') {
                    s.pop();
                }
                else{
                    s.push(str[i]);
                }
            }
        }
        
        while(!s.empty()){
            ans += s.top();
            s.pop();
        }
        
        return ans;
    }
};