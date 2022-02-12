class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1] + 1) {
                continue;
            }
            else {
                int tmp = nums[i - 1] + 1;
                ans += tmp - nums[i];
                nums[i] = tmp;
            }
        }
        return ans;
    }
};