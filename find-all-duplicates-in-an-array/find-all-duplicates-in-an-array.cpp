class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> set;
        vector<int> ans;
        
        for (auto& num : nums) {
            if (set.find(num) != set.end()) {
                ans.push_back(num);
            }
            set.insert(num);
        }
        return ans;
    }
};