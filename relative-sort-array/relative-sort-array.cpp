class Solution {
public:
	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
		int arr[1001] = { 0 };
		vector<int> ans;

		for (auto& n : arr1) {
			arr[n]++;
		}

		for (auto& n : arr2) {
			for (int i = 0; i < arr[n]; i++) {
				ans.push_back(n);
			}
			arr[n] = 0;
		}
		
		for (int i = 0; i < 1001; i++) {
			if (arr[i] > 0) {
				for (int j = 0; j < arr[i]; j++) {
					ans.push_back(i);
				}
			}
			arr[i] = 0;
		}

		return ans;
	}
};