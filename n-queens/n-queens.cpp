class Solution {
public:
    bool isValid(vector<string> &grid, int row, int col)
    {
        //check for col
        for( int i = row; i >= 0; i--){
            if(grid[i][col]=='Q'){
                return false;
            }
        }
        //check for left diag
        for( int i = row, j = col; i >= 0 and j >= 0; i--,j--)
            if(grid[i][j]=='Q') return false;

        //check for right diag
       for( int i = row, j = col; i >= 0 and j < grid.size(); i--,j++)
            if(grid[i][j]=='Q') return false; 
    
        return true;
    }

    void dfs(vector<string> &grid, int row, vector<vector<string>> &ret)
    {
       if(row == grid.size()) {
           ret.push_back(grid);  
           return;
       }
       for( int col = 0; col < grid.size(); col++){ 
           if(isValid(grid, row, col)) {
               grid[row][col] = 'Q';    
               dfs(grid, row + 1, ret);   
               grid[row][col] = '.';    

           }
       }   
    }
    
    vector<vector<string>> solveNQueens(int n) {
       vector<string>  grid(n,string(n, '.')); 
       vector<vector<string>> ret;
        dfs(grid,0,ret);
        return ret;
    }
};