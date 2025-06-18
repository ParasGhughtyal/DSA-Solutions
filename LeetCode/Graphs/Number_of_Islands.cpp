class Solution {
public:
    
    void dfs(vector<vector<char>> &grid, int row, int col)
    {   
        int r = grid.size();
        int c = grid[0]. size();

        if(row < 0 || row == r || col < 0 || col == c || grid[row][col] == '0')
        return;

        grid[row][col] = '0';

        dfs(grid, row-1, col);
        dfs(grid, row+1, col);
        dfs(grid, row, col-1);
        dfs(grid, row, col+1);
    }

    int numIslands(vector<vector<char>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j] == '1')
                {
                    dfs(grid,i,j);
                    count++;
                }
                
            }
        }

        return count;
    }
};
