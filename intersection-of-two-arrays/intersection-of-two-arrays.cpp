class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set, s;
        vector<int> ans;
        
        for (auto& n : nums1) {
            set.insert(n);
        }
        
        for (auto& n : nums2) {
            if (set.find(n) != set.end() && s.find(n) == s.end()) {
                s.insert(n);
                ans.push_back(n);
            }
        }
        return ans;
    }
};