class Solution {
public:
    void dfs(vector<vector<int>>& grid, int r, int c, int rows, int cols,
             long long& sum) {
        if (r < 0 || c < 0)
            return;
        if (r >= rows || c >= cols)
            return;

        if (grid[r][c] != 0) {
            sum += grid[r][c];
            grid[r][c] = 0;
        } else {
            return;
        }
        dfs(grid, r + 1, c, rows, cols, sum);
        dfs(grid, r - 1, c, rows, cols, sum);
        dfs(grid, r, c + 1, rows, cols, sum);
        dfs(grid, r, c - 1, rows, cols, sum);
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int count = 0, rows = grid.size(), cols = grid[0].size();
        long long sum = 0;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] != 0) {
                    sum = 0;
                    dfs(grid, r, c, rows, cols, sum);
                    if (sum % k == 0) {
                        count++;
                    }
                    sum = 0;
                }
            }
        }
        return count;
    }
};