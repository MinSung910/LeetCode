class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ans = 0;
        int len = arr.size();
        
        for (int i = 0; i < len - 2; i++) {
            for (int j = i + 1; j < len - 1; j++) {
                if (abs(arr[i] - arr[j]) > a) continue;
                for (int k = j + 1; k < len; k++) {
                    if (abs(arr[j] - arr[k]) > b) continue;
                    if (abs(arr[i] - arr[k]) > c) continue;
                    ans++;
                }
            }
        }
        return ans;
    }
};