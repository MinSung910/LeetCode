class Solution {
public:
   void recur(vector<int> &nums, int i, vector<vector<int>> &ans, set<vector<int>> &s) {
        if(i >= nums.size()){
            s.insert(nums);
            return;
        } 
        
        
        for(int j = i; j <nums.size(); j++) {
            swap(nums[i], nums[j]);
            recur(nums, i + 1, ans, s);
            swap(nums[i], nums[j]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> ans;
        
        recur(nums, 0, ans, s);
        for(auto i : s) {
            ans.push_back(i);
        }
        return ans;
    }
};