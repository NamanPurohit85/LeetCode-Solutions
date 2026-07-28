class Solution {
public:
    string smallestPalindrome(string s) {
        int len = s.size();

        string ans;

        for (int i = 0; i < len / 2; i++) {
            ans.push_back(s[i]);
        }

        sort(ans.begin(), ans.end());

        if (len % 2 != 0) {
            ans.push_back(s[len / 2]);
        }

        int i = ans.size() - 1;

        if (len % 2 != 0)
            i--;

        while (i >= 0) {
            ans.push_back(ans[i]);
            i--;
        }

        return ans;
    }
};