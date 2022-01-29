class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = INT_MIN;
        
        for (auto& account : accounts) {
            ans = max(ans, accumulate(account.begin(), account.end(), 0));
        }
        
        return ans;
    }
};