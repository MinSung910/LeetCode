class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int low = 0, high = s.length();
        vector<bool> visit(s.length(), false);
        
        for (char c : s) {
            if (c == 'I') {
                visit[low] = true;
                ans.push_back(low++);
            }
            else {
                visit[high] = true;
                ans.push_back(high--);
            }
        }
        for (int i = 0; i <= s.length(); i++) {
            if (!visit[i]) ans.push_back(i);
        }
        return ans;
    }
};