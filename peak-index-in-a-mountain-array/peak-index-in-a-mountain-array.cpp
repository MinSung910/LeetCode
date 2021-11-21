class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peak = INT_MIN;
        int ans = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if (peak < arr[i]) {
                peak = arr[i];
                ans = i;
            }
        }
        return ans;
    }
};