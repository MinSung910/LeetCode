class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        int left = 0, right = col - 1;
        int res = 0;
        
        for (int i = 0; i < row; i++) {
            res += mat[i][left++] + mat[i][right--];
        }
        
        if (row % 2 == 1) res -= mat[row/2][col/2];
        return res;
    }
};