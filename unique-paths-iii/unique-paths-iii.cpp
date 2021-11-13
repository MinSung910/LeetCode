class Solution {
public:
	int rows, cols;
	vector<int> dx = { -1,1,0,0 };
	vector<int> dy = { 0,0,-1,1 };
	int cnt = 0;

	bool allVisted(vector<vector<int>>& grid, vector<vector<int>>& visited) {
		for (int i = 0; i < visited.size(); i++) {
			for (int j = 0; j < visited[0].size(); j++) {
				if (grid[i][j] == 0 && visited[i][j] == false) {
					return false;
				}
			}
		}
		return true;
	}

	void dfs(int y, int x, vector<vector<int>>& grid, vector<vector<int>> visited) {
		if (grid[y][x] == 2 && allVisted(grid, visited)) {
			cnt++;
			return;
		}

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= rows || nx >= cols) {
				continue;
			}

			if (visited[ny][nx] == false && grid[ny][nx] != -1) {
				visited[ny][nx] = true;
				dfs(ny, nx, grid, visited);
				visited[ny][nx] = false;
			}
		}
	}
	int uniquePathsIII(vector<vector<int>>& grid) {
		rows = grid.size();
		cols = grid[0].size();

		vector<vector<int>> visited(rows, vector<int>(cols, false));

		for (int row = 0; row < rows; row++) {
			for (int col = 0; col < cols; col++) {
				if (grid[row][col] == 1) {
					visited[row][col] = true;
					dfs(row, col, grid, visited);
				}
			}
		}
		return cnt;
	}
};