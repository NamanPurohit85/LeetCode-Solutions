class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty())
            return {0, 0};

        int m = grid.size();
        int n = grid[0].size();
        int i = 0, j = 0;

        while (true) {
            char dir = grid[i][j];
            grid[i][j] = '#';

            if (dir == 'R')
                j++;
            else if (dir == 'D')
                i++;
            else if (dir == 'L')
                j--;
            else if (dir == 'U')
                i--;

            if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '#') {
                if (dir == 'R')
                    j--;
                else if (dir == 'D')
                    i--;
                else if (dir == 'L')
                    j++;
                else if (dir == 'U')
                    i++;

                return {i, j};
            }
        }
    }
};