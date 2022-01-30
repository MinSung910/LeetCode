class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int v1 = INT_MIN, v2 = INT_MIN;
        int i, j;
        
        for(int i = 0; i < nums.size(); i++) {
            if (v1 < nums[i]) {
                v2 = v1;
                v1 = nums[i];
            }
            else if (v2 < nums[i]) {
                v2 = nums[i];
            }
        }
        
        return (v1 - 1) * (v2 - 1);
    }
};