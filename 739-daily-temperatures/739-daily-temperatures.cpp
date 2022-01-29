class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> ans(t.size(), 0);
        stack<int> s;
        
        for (int i = 0; i < t.size(); i++) {
            while (1) {
                if (s.empty()) break;
                if (t[s.top()] >= t[i]) break;
                ans[s.top()] = i - s.top();
                s.pop();
            }   
            s.push(i);
        }
        
        while (!s.empty()) {
            s.pop();
        }
        
        return ans;
    }
};