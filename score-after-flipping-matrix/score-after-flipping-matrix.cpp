class Solution {
public:
    int rows, cols;
    
    void togglingRow(vector<vector<int>>& grid, int r){
        for (int col = 0; col < cols; col++){
            grid[r][col] = grid[r][col] == 1 ? 0 : 1;
        }
    }
    
    void togglingCol(vector<vector<int>>& grid, int c){
        for (int row = 0; row < rows; row++){
            grid[row][c] = grid[row][c] == 1 ? 0 : 1;
        }
    }
    
    int matrixScore(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();
        int sum = 0;
        
        for (int row = 0; row < rows; row++) {
            if (grid[row][0] == 0) {
                togglingRow(grid, row);
            } 
        }
        
        for (int col = 0; col < cols; col++){
            int oneCnt = 0;
            for (int row = 0; row < rows; row++){
                if (grid[row][col] == 1){
                    oneCnt++;
                }
            }
            
            if (oneCnt <= rows / 2) {
                togglingCol(grid, col);
            }
        }
        
        for( int row = 0; row < rows; row++) {
            int num = 0;
            
            for(int col=0;col<cols;col++) {
                num = 2*num + grid[row][col];    
            }
            
            sum+=num;
        }
        
        return sum;
    }
};