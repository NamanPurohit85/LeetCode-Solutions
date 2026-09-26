class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> map;
        for (int i = 0; i < knowledge.size(); i++) {
            map[knowledge[i][0]] = knowledge[i][1];
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                int j = i;
                string key = "";
                while (s[++j] != ')') {
                    key.push_back(s[j]);
                }
                string replacement =
                    map.find(key) != map.end() ? map[key] : "?";
                s.replace(i, j - i + 1, replacement);
                i += replacement.size() - 1;
            }
        }
        return s;
    }
};