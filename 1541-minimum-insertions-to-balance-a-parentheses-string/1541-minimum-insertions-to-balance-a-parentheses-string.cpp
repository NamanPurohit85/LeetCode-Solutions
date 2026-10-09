class Solution {
public:
    int minInsertions(string s) {
        int ans = 0;
        int open = 0; // Tracks unmatched '('

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                open++;
            } else {
                // Check if there is a consecutive ')'
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++; // Consumed the pair "))"
                } else {
                    ans++; // Single ')', need to insert one ')' to make "))"
                }

                // Now we have a complete "))" unit
                if (open > 0) {
                    open--; // Matches an existing '('
                } else {
                    ans++; // No '(' to match, must insert one '('
                }
            }
        }

        // Each remaining '(' needs "))" (2 insertions)
        ans += open * 2;
        return ans;
    }
};