
class Solution
{
public:
    // 0 -> water, 1 -> unvisited land, 2 -> visited land

    void markCurrLand(vector<vector<char>> &grid, int i, int j, int rows, int cols)
    {
        // Boundary Conditions
        if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] != '1')
            return;

        // mark the curr land as visited
        grid[i][j] = '2';

        markCurrLand(grid, i + 1, j, rows, cols); // DOWN
        markCurrLand(grid, i, j + 1, rows, cols); // RIGHT
        markCurrLand(grid, i - 1, j, rows, cols); // TOP
        markCurrLand(grid, i, j - 1, rows, cols); // LEFT
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();

        // Boundary Case
        // If the grid is empty
        if (rows == 0)
            return 0;

        int islands = 0;

        // Iterate over all cells of the array
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == '1')
                {
                    markCurrLand(grid, i, j, rows, cols);
                    islands += 1;
                }
            }
        }

        return islands;
    }
};

