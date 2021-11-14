bool cmp(vector<int> &a, vector<int> &b) {
	return a[0] < b[0];
}
class Solution {
public:
	int maxWidthOfVerticalArea(vector<vector<int>>& points) {
		int maxGap = INT_MIN;
		sort(points.begin(), points.end(), cmp);

		for (int i = 1; i < points.size(); i++) {
			maxGap = max(points[i][0] - points[i - 1][0], maxGap);
		}
		return maxGap;
	}
};