class Solution {
public:
	int rangeSum(vector<int>& nums, int n, int left, int right) {
		vector<int> newNums;
		
		for (int i = 0; i < n; i++) {
			int sum = nums[i];
            newNums.push_back(sum);

            for (int j = i + 1; j < n; j++) {
				sum += nums[j];
				newNums.push_back(sum);
			}
		}
        
		sort(newNums.begin(), newNums.end());

        int ans = 0;
		
        for (int i = left - 1; i <= right - 1; i++) {
            ans = (ans + newNums[i]) % 1000000007;
        }
        
        return ans;
	}
};