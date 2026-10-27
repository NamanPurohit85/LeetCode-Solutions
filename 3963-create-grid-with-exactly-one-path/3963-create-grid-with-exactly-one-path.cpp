class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        ans.reserve(m);

        for (int i = 0; i < m; i++) {
            string row = "";
            row.reserve(n);
            for (int j = 0; j < n; j++) {
                if (j == 0 || i == m - 1) {
                    row.push_back('.');
                } else {
                    row.push_back('#');
                }
            }
            ans.push_back(row);
        }

        return ans;
    }
};