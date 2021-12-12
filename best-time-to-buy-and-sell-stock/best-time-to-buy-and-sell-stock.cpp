class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_ = prices[0];
        int max_ = prices[0];
        
        int max_prof = 0;
        
        for (int i = 1; i < prices.size(); ++i)
        {
            if (prices[i] <= min_)
            {
                min_ = max_ = prices[i];
                continue;
            }
            
            max_ = max(prices[i], max_);
            max_prof = max(max_prof, max_ - min_);
        }
        return max_prof;
    }
};